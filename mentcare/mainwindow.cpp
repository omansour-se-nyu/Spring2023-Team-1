#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AddPatient.h"
#include <iostream>

#include <Qstring>
#include <string>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../mentcare.sqlite");
    userEmail="";
    userRole="";
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

void MainWindow::on_addPatient_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->AddPatientPage);
}


void MainWindow::on_addPatientCancelButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PatientsPage);
}


void MainWindow::on_addPatientSubmitButton_clicked()
{
    PatientInfo patientInfo;
    patientInfo.patientFirstName = ui->firstName_lineEdit->text();
    patientInfo.patientLastName = ui->lastName_lineEdit->text();
    patientInfo.patientDOB = ui->dob_date_edit_4->text();
    patientInfo.patientSex = ui->sex_comboBox->currentText();
    patientInfo.patientHeight = ui->height_spinBox->text();
    patientInfo.patientWeight = ui->weight_spinBox->text();
    patientInfo.patientSSN = ui->ssn_lineEdit->text();
    patientInfo.patientAddress = ui->address_lineEdit->text();
    patientInfo.patientCity = ui->city_lineEdit->text();
    patientInfo.patientZip = ui->zipcode_lineEdit->text();
    patientInfo.patientEmail = ui->email_lineEdit->text();
    patientInfo.patientPhone = ui->phone_lineEdit->text();
    patientInfo.emergencyFirstName = ui->ec_firstName_lineEdit->text();
    patientInfo.emergencyLastName = ui->ec_lastName_lineEdit->text();
    patientInfo.emergencyPhone = ui->ec_phone_lineEdit->text();
    patientInfo.emergencyEmail = ui->ec_email_lineEdit->text();

    bool addedPatient = patientInfo.handleAddPatient(patientInfo, db);

    if (addedPatient){
        QMessageBox::information(this, "Inserted", "Successfully added patient!");
        ui->stackedWidget->setCurrentWidget(ui->PatientsPage);

    } else {
        QMessageBox::information(this, "Not Inserted", "Could not add patient, please check for errors or duplicate entry.");
    }

//    bool requiredFieldsPopulated = true;

//    if (ui->firstName_lineEdit->text().isEmpty()) {
//        ui->firstName_lineEdit->setText("This field is required.");
//        requiredFieldsPopulated = false;
//    }

//    if (ui->dob_date_edit_4->text().isEmpty()) {
////        ui->dob_date_edit_4->setText("This field is required.");
//        requiredFieldsPopulated = false;
//    }

//    if (ui->ssn_lineEdit->text().isEmpty()) {
//        ui->ssn_lineEdit->setText("This field is required.");
//        requiredFieldsPopulated = false;
//    }

//    if (requiredFieldsPopulated==true)
//    {
//        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
//        db.setDatabaseName("../mentcare.sqlite");
//        if (!db.open()){
//            QMessageBox::information(this, "Connection", "Unable to Load Database");
//            db.close();
//        } else {
//            QString patientName = ui->firstName_lineEdit->text();
//            QString patientDOB = ui->dob_date_edit_4->text();
//            QString patientSex = ui->sex_comboBox->currentText();
//            QString patientHeight = ui->height_spinBox->text();
//            QString patientWeight = ui->weight_spinBox->text();
//            QString patientSSN = ui->ssn_lineEdit->text();
//            QString patientAddress = ui->address_lineEdit->text();
//            QString patientEmail = ui->email_lineEdit->text();
//            QString patientPhone = ui->phone_lineEdit->text();
//            QString emergencyName = ui->ec_name_lineEdit->text();
//            QString emergencyPhone = ui->ec_phone_lineEdit->text();
//            QString emergencyEmail = ui->ec_email_lineEdit->text();

//            QSqlQuery query;
//            query.prepare("INSERT INTO patients (name, dob, sex, height, weight, ssn, address, email, phone, ec_name, ec_phone, ec_email)"
//                          "VALUES (:name, :dob, :sex, :height, :weight, :ssn, :address, :email, :phone, :ec_name, :ec_phone, :ec_email)");
//            query.bindValue(":name",  patientName);
//            query.bindValue(":dob", patientDOB);
//            query.bindValue(":sex", patientSex);
//            query.bindValue(":height", patientHeight);
//            query.bindValue(":weight", patientWeight);
//            query.bindValue(":ssn", patientSSN);
//            query.bindValue(":address", patientAddress);
//            query.bindValue(":email", patientEmail);
//            query.bindValue(":phone", patientPhone);
//            query.bindValue(":ec_name", emergencyName);
//            query.bindValue(":ec_phone", emergencyPhone);
//            query.bindValue(":ec_email", emergencyEmail);

//            if (query.exec()){
//                QMessageBox::information(this, "Inserted", "Successfully Added Patient");
//                db.close();
//                ui->stackedWidget->setCurrentWidget(ui->PatientsPage);

//            } else {
//                QMessageBox::information(this, "Not Inserted", "Could Not Add Patient");
//                db.close();
//            }
//        }
//    } else {
//        QMessageBox::information(this, "Form incomplete", "Required fields are missing.");
//    }
}


void MainWindow::on_patientLookupButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PatientsPage);
}


void MainWindow::on_patientsPage_exit_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}


void MainWindow::on_stackedWidget_currentChanged(int arg1)
{
    if (arg1 == 0){
        //QSqlDatabase
        if (!db.open()){
            QMessageBox::information(this, "Connection", "Unable to Load Database");
            db.close();
        } else {
            QSqlQuery query;
            query.prepare("SELECT id, first_name, last_name, email, dob, phone FROM patients");
            if (query.exec()){
                QSqlQueryModel * model = new QSqlQueryModel();
                model->setQuery(query);
                ui->tableView->setModel(model);
            } else {
                 QMessageBox::information(this, "Connection", "Unable to Query Database");
            }

        }
    } else if (arg1 == 1) {
        QString title = windowTitle();

        QStringList parts = title.split(","); // Split the title string using comma delimiter
        QString patientIdString = parts.at(1).trimmed(); // Extract the second part and remove whitespace

        int id = patientIdString.toInt(); // Convert the patient id string to an integer

        std::cout << id << std::endl;
        // Define the query string
        QString queryString = "SELECT * FROM patients WHERE id=:id";

        // Prepare the query
        QSqlQuery query;
        query.prepare(queryString);

        // Bind the id value
        query.bindValue(":id", id);

        // Execute the query
        if (query.exec())
        {
            std::cout << "query executes!!!!" << std::endl;
            // Iterate over the results

            // Check the number of rows returned by the query
             int numRows = query.size();
             std::cout << "Number of rows returned: " << numRows << std::endl;

            while (query.next())
            {
                // Read the values into temporary variables
                 QString firstName = query.value("first_name").toString();
                 QString dob = query.value("dob").toString();
                 QString lastName = query.value("last_name").toString();
                 QString ssn = query.value("ssn").toString();
                 QString city = query.value("city").toString();
                 QString streetAddress = query.value("street_address").toString();
                 QString zipCode = query.value("zip_code").toString();
                 QString email = query.value("email").toString();
                 QString phone = query.value("phone").toString();
                 QString ecFirstName = query.value("ec_first_name").toString();
                 QString ecLastName = query.value("ec_last_name").toString();
                 QString ecPhone = query.value("ec_phone").toString();
                 QString ecEmail = query.value("ec_email").toString();

                 // Use the variables as needed
                 QString patientName = lastName + ", " + firstName;
                 ui->patientInfo_name_display->setText(patientName);
                 ui->patientInfo_ssn_display->setText(ssn);
                 ui->patientInfo_city_display->setText(city);
                 ui->patientInfo_email_display->setText(email);
                 ui->patientInfo_phone_display->setText(phone);

                QString ec_name = ecFirstName + ", " + ecLastName;
                ui -> patientInfo_ec_name_display -> setText(ec_name);
                ui->patientInfo_ec_phone_display->setText(ecPhone);
                ui->patientInfo_ec_email_display->setText(ecEmail);

                ui->patientInfo_zip_display->setText(zipCode);
                ui->patientInfo_street_display->setText(streetAddress);
                ui->patientInfo_city_display->setText(city);
                ui->patientInfo_dob_display->setText(dob);

            }
        }
        else
        {
            QMessageBox::information(this, "Connection", "Unable to Query Database");
        }
    }
}

// navigate from main page to loing page
void MainWindow::on_HomePage_ToLoginPage_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->LoginPage);
    ui->LoginPage_LineEdit_Login_Password->clear();
    ui->LoginPage_LineEdit_Login_Email->clear();
}

// handle login logic
void MainWindow::on_LoginPage_LoginButton_clicked()
{
    QString email = ui->LoginPage_LineEdit_Login_Email->text();
    QString password = ui->LoginPage_LineEdit_Login_Password->text();

    bool validUser = loginAccess(email, password);

    if (validUser) {
        QMessageBox::information(this, "Login", "Successful!");
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
    } else {
        QMessageBox::information(this, "Login", "Login Failed, please try again!");
    }
}

bool MainWindow::loginAccess(QString email, QString password) {
    if (!db.open()) {
        //maybe this should be moved to a UI type function?
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
        return false;
    } else {
        QSqlQuery query;
        query.prepare("SELECT * FROM users WHERE users.email=:loginEmail AND users.password=:loginPassword");
        query.bindValue(":loginEmail", email);
        query.bindValue(":loginPassword", password);
        if (query.exec() && query.next()) {
            userEmail = email;
            return true;
        } else {
            return false;
        }
    }
}



// navigate from login page to main page
// need to remove this button and code, the login button will check credentials and progress the user
void MainWindow::on_LoginPage_BackToMainButton_clicked()
{
    //ui->stackedWidget->setCurrentWidget(ui->HomePage);
}

bool MainWindow::checkEmailInDatabase(QString email)
{
    if (!db.open()) {
        //maybe this should be moved to a UI type function?
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
        return false;
    } else {
        QSqlQuery query;
        query.prepare("SELECT * FROM users WHERE users.email=:loginEmail");
        query.bindValue(":loginEmail", email);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
}

void MainWindow::on_HomePage_ToRegisterPage_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->RegisterPage);
}


void MainWindow::on_RegisterPage_LoginButton_clicked()
{
    QString email = ui->RegisterPage_LineEdit_Login_Email->text();
    QString pass1 = ui->RegisterPage_LineEdit_Login_Password->text();
    QString pass2 = ui->RegisterPage_LineEdit_Login_Password_2->text();

    if (email == "") {
        QMessageBox::information(this, "Registration", "Email cannot be empty");
    } else if(this->checkEmailFormat(email) == false) {
        QMessageBox::information(this, "Registration", "Invalid email format");
    } else if(this ->checkEmailInDatabase(email) == true) {
        QMessageBox::information(this, "Registration", "Email registered!");
    } else if(pass1 == "") {
        QMessageBox::information(this, "Registration", "Password cannot be empty");
    } else if (pass1.length() < 6) {
        QMessageBox::information(this, "Registration", "Password length need to be at least 6");
    } else if (pass1!=pass2) {
        QMessageBox::information(this, "Registration", "Passwords do not match");
        std::cout << pass1.toStdString() << std::endl << pass2.toStdString();
    } else {
        bool userAdded = newUser(email, pass1);
        if (userAdded) {
            QMessageBox::information(this, "Registration", "New user " + email + " added");
            ui->RegisterPage_LineEdit_Login_Email->clear();
            ui->RegisterPage_LineEdit_Login_Password->clear();
            ui->RegisterPage_LineEdit_Login_Password_2->clear();
        } else {
            QMessageBox::information(this, "Registration", "Unable to add new user");
        }
    }

}

bool MainWindow::checkEmailFormat(QString email)
{
    QRegularExpression emailPattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");

    if (!emailPattern.match(email).hasMatch())
    {
        qDebug() << "Invalid email format";
        // Do something if the email format is invalid
        std::cout << "false";
        return false;
    }
    else
    {
        qDebug() << "Valid email format";
        // Do something if the email format is vali
        std::cout << "true";
        return true;
    }
}

bool MainWindow::newUser(QString email, QString password) {
    if (!db.open()) {
        //maybe this should be moved to a UI type function?
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
        return false;
    } else {
        QSqlQuery query;
        query.prepare("INSERT INTO users (email, password)"
                      "VALUES (:email, :password)");
        query.bindValue(":email", email);
        query.bindValue(":password", password);
        if (query.exec()) {// && query.next()) {
            //userEmail = email;
            std::cout << "success: " << query.lastQuery().toStdString() << std::endl;
            return true;
        } else {
            std::cout << "fail: " << query.lastQuery().toStdString() << std::endl;
            return false;
        }
    }
}


void MainWindow::on_RegisterPage_LoginButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}


//void MainWindow::on_PatientPage_Filter_Patient_Button_clicked()
//{

//    //QSqlDatabase
//    if (!db.open()){
//        QMessageBox::information(this, "Connection", "Unable to Load Database");
//        db.close();
//    } else {
//        QString name = ui->PatientPage_LineEdit_Name->text();
//        QString ssn = ui->PatientPage_LineEdit_SSN->text();
//        QString dob = ui->PatientPage_DateEdit_DOB->text();

//        QSqlQuery query;
//        query.prepare("SELECT id, email, name, dob, phone, ssn FROM patients WHERE name LIKE :name OR ssn LIKE :ssn OR dob = :dob");
//        query.bindValue(":name", "%" + name + "%");
//        query.bindValue(":ssn", "%" + ssn + "%");
//        query.bindValue(":dob", dob);
//        if (query.exec()){
//            QSqlQueryModel * model = new QSqlQueryModel();
//            model->setQuery(query);
//            ui->tableView->setModel(model);
//        } else {
//             QMessageBox::information(this, "Connection", "Unable to Query Database");
//        }

//    }

//}


//void MainWindow::on_PatientPage_Clear_Filter_Button_clicked()
//{
//    //QSqlDatabase
//    if (!db.open()){
//        QMessageBox::information(this, "Connection", "Unable to Load Database");
//        db.close();
//    } else {

//        ui->PatientPage_LineEdit_Name->clear();
//        ui->PatientPage_LineEdit_SSN->clear();
//        ui->PatientPage_DateEdit_DOB->clear();

//        QSqlQuery query;
//        query.prepare("SELECT id, email, name, dob, phone, ssn FROM patients");
//        if (query.exec()){
//            QSqlQueryModel * model = new QSqlQueryModel();
//            model->setQuery(query);
//            ui->tableView->setModel(model);
//        } else {
//             QMessageBox::information(this, "Connection", "Unable to Query Database");
//        }

//    }

//}


void MainWindow::on_PatientPage_LineEdit_Name_textEdited(const QString &arg1)
{
    if (!db.open()){
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
    } else {
        QString name = ui->PatientPage_LineEdit_Name->text();

        QSqlQuery query;
        query.prepare("SELECT id, first_name, last_name, dob, email, phone FROM patients WHERE first_name LIKE :name");
        query.bindValue(":name", "%" + name + "%");
        if (query.exec()){
            QSqlQueryModel * model = new QSqlQueryModel();
            model->setQuery(query);
            ui->tableView->setModel(model);
        } else {
             QMessageBox::information(this, "Connection", "Unable to Query Database");
        }
    }
}



void MainWindow::on_toggleVisible_snn_button_toggled(bool checked)
{
//    ui->ssn_display->setText("SSN visible");
//    ui->toggleVisible_snn_button->setText("hide");
}



//void PatientInfoPage::showEvent(QShowEvent* event) {


//}

/*
void PatientInfoPage::showEvent(QShowEvent* event)
{
    // Call the base class implementation of showEvent()
    QWidget::showEvent(event);

    // Get the selected patient ID
    int selectedPatientId = this->property("selectedPatientId").toInt();

    // Create a SQL query
    QSqlQuery query;
    query.prepare("SELECT * FROM Patients WHERE id = :patientId");
    query.bindValue(":patientId", selectedPatientId);

    // Execute the query
    if(query.exec())
    {
        // Retrieve the results
        if(query.next())
        {
            // Set the patient information in the widget
            setPatientInfo(query.value("name").toString(), query.value("age").toInt(), query.value("gender").toString());
        }
    }
    else
    {
        // Display an error message if the query failed
        QMessageBox::warning(this, "Error", "Failed to retrieve patient information.");
    }
}

 */


void MainWindow::on_goToPatientInfo_button_clicked()
{

    QString patientId = ui->PatientsPage_LineEdit_Lookup_id->text();

    QString title = "Patient id, " + patientId;

    setWindowTitle(title);

    ui->stackedWidget->setCurrentWidget(ui->PatientInfoPage);

}


void MainWindow::on_PatientInfoPage_windowIconTextChanged(const QString &iconText)
{

}

void MainWindow::on_PatientInfoPage_windowTitleChanged(QString const& title) {

}


void MainWindow::on_patientInfo_back_button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}

void MainWindow::on_HomePage_ToPatientVisit_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PatientVisitPage);
}

void MainWindow::on_PatientVisit_Back_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}

