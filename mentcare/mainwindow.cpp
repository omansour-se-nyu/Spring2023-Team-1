#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AddPatient.h"
#include "login.h"
#include <iostream>

#include <QString>
#include <string>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    //db.setPassword("");
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
    patientInfo.patientDOB = ui->dob_date_edit_4->date().toString("MM/dd/yyyy");
    patientInfo.patientSex = ui->sex_comboBox->currentText();
    patientInfo.patientHeight = ui->height_spinBox->text();
    patientInfo.patientWeight = ui->weight_spinBox->text();
    patientInfo.patientSSN = ui->ssn_lineEdit->text();
    patientInfo.patientAddress = ui->address_lineEdit->text();
    patientInfo.patientCity = ui->city_lineEdit->text();
    patientInfo.patientState = ui->state_lineEdit->text();
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
                 int height = query.value("height").toInt();
                 int weight = query.value("weight").toInt();
                 QString ssn = query.value("ssn").toString();
                 QString city = query.value("city").toString();
                 QString state = query.value("state").toString();
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
                 ui->patientInfo_firstname_display->setText(firstName);
                 ui->patientInfo_lastname_display->setText(lastName);
                 ui->patientInfo_ssn_display->setText(ssn);
                 ui->patientInfo_city_display->setText(city);
                 ui->patientInfo_height_display->setValue(height);
                 ui->patientInfo_weight_display->setValue(weight);
                 ui->patientInfo_email_display->setText(email);
                 ui->patientInfo_phone_display->setText(phone);

                QString ec_name = ecFirstName + ", " + ecLastName;
                ui -> patientInfo_ec_firstname_display -> setText(ecFirstName);
                ui -> patientInfo_ec_lastname_display -> setText(ecLastName);
                ui->patientInfo_ec_phone_display->setText(ecPhone);
                ui->patientInfo_ec_email_display->setText(ecEmail);

                ui->patientInfo_zip_display->setText(zipCode);
                ui->patientInfo_street_display->setText(streetAddress);
                ui->patientInfo_city_display->setText(city);
                ui->patientInfo_state_display->setText(state);

                QDate date = QDate::fromString(dob, "MM/dd/yyyy");
                ui->patientInfo_dob_display->setDate(date);
            }
        }
        else
        {
            QMessageBox::information(this, "Connection", "Unable to Query Database");
        }

        QSqlQuery query_visits;
        QString query_visits_String = "SELECT CASE WHEN datetime('now') < datetime_occurs THEN 'upcoming' ELSE 'past' END AS [Status], STRFTIME('%m/%d/%Y', datetime_occurs) AS [Date], STRFTIME('%H:%M', datetime_occurs) AS [Time], providers.first_name || ' ' || providers.last_name AS [Attending Provider] FROM patient_visits JOIN providers ON patient_visits.provider_id = providers.id WHERE patient_id=:patient_id ORDER BY datetime_occurs DESC";
        query_visits.prepare(query_visits_String);
        query_visits.bindValue(":patient_id", id);

        if(query_visits.exec())
        {
            QSqlQueryModel * model = new QSqlQueryModel();
            model->setQuery(query_visits);
            ui->PatientInfo_visits_tableView->setModel(model);

        }
        else
        {
            QMessageBox::information(this, "Connection", "Unable to Query Database");
        }

        ui->addVisit_groupBox->setVisible(false);
        ui->enableAddVisit_button->setEnabled(true);
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
    Login login;
    QString email = ui->LoginPage_LineEdit_Login_Email->text();
    QString password = ui->LoginPage_LineEdit_Login_Password->text();

    login = login.handleLogin(email, password, db);

    if (login.success) {
        userEmail = login.userEmail;
        userRole = login.userRole;
        QMessageBox::information(this, "Login", "Successful!");
        enableHomePageAccess(userRole);
        QPixmap logoImage(":/new/prefix1/Logo.png");
        logoImage.scaled(QSize(400,140));
        ui->HomePage_Logo_Label->setPixmap(logoImage);
        ui->stackedWidget->setCurrentWidget(ui->HomePage);
        ui->HomePage_UserEmailLabel->setText(userEmail);
        ui->HomePage_UserRoleLabel->setText(userRole);
    } else {
        QMessageBox::information(this, "Login", "Login Failed, please try again!");
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
    QSqlTableModel *model = new QSqlTableModel;
    model->setTable("users");
    if (userRole == "Administrator")
        model->setFilter("users.role_level>1");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    ui->RegisterPage_Users_Table->setModel(model);
}


void MainWindow::on_RegisterPage_LoginButton_clicked()
{
    QString email = ui->RegisterPage_LineEdit_Login_Email->text();
    QString pass1 = ui->RegisterPage_LineEdit_Login_Password->text();
    QString pass2 = ui->RegisterPage_LineEdit_Login_Password_2->text();
    QString role = ui->RegisterPage_ButtonGroup_Role->checkedButton()->text();
    int roleLevel = ui->RegisterPage_ButtonGroup_Role->checkedId()*(-1)-1;

    //std::cout << "Role: " << role.toStdString() << std::endl;


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
        std::cout << pass1.toStdString() << std::endl << pass2.toStdString() << std::endl;
    } else if (role != "Administrator" || role != "Provider" || role != "Patient") {
        QMessageBox::information(this, "Registration", "Please select a user role");
        std::cout << role.toStdString() << std::endl;
    } else if (roleLevel < 1 || roleLevel > 3) {
        QMessageBox::information(this, "Registration", "Please select a user role");
        std::cout << roleLevel << std::endl;
    } else {
        bool userAdded = newUser(email, pass1, role, roleLevel);
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

void MainWindow::enableHomePageAccess(QString role)
{
    if (role == "System Owner" || role == "Administrator") {
        ui->patientLookupButton->setEnabled(true);
        ui->HomePage_ToPatientVisit_Button->setEnabled(true);
        ui->HomePage_toCalendar_Button->setEnabled(true);
        ui->HomePage_ToLoginPage_Button->setEnabled(true);
        ui->HomePage_ToRegisterPage_Button->setEnabled(true);

        ui->patientLookupButton->setVisible(true);
        ui->HomePage_ToPatientVisit_Button->setVisible(true);
        ui->HomePage_toCalendar_Button->setVisible(true);
        ui->HomePage_ToLoginPage_Button->setVisible(true);
        ui->HomePage_ToRegisterPage_Button->setVisible(true);
    } else if (role == "Provider") {
        ui->patientLookupButton->setEnabled(true);
        ui->HomePage_ToPatientVisit_Button->setEnabled(true);
        ui->HomePage_toCalendar_Button->setEnabled(true);
        ui->HomePage_ToLoginPage_Button->setEnabled(true);
        ui->HomePage_ToRegisterPage_Button->setEnabled(false);


        ui->patientLookupButton->setVisible(true);
        ui->HomePage_ToPatientVisit_Button->setVisible(true);
        ui->HomePage_toCalendar_Button->setVisible(true);
        ui->HomePage_ToLoginPage_Button->setVisible(true);
        ui->HomePage_ToRegisterPage_Button->setVisible(false);
    } else {
        ui->patientLookupButton->setEnabled(false);
        ui->HomePage_ToPatientVisit_Button->setEnabled(false);
        ui->HomePage_toCalendar_Button->setEnabled(true);
        ui->HomePage_ToLoginPage_Button->setEnabled(true);
        ui->HomePage_ToRegisterPage_Button->setEnabled(false);


        ui->patientLookupButton->setVisible(false);
        ui->HomePage_ToPatientVisit_Button->setVisible(false);
        ui->HomePage_toCalendar_Button->setVisible(true);
        ui->HomePage_ToLoginPage_Button->setVisible(true);
        ui->HomePage_ToRegisterPage_Button->setVisible(false);
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

bool MainWindow::newUser(QString email, QString password, QString role, int roleLevel) {
    if (!db.open()) {
        //maybe this should be moved to a UI type function?
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
        return false;
    } else {
        QSqlQuery query;
        query.prepare("INSERT INTO users (email, password, role, role_level)"
                      "VALUES (:email, :password, :role, :role_level)");
        query.bindValue(":email", email);
        query.bindValue(":password", password);
        query.bindValue(":role", role);
        query.bindValue(":role_level", roleLevel);
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
    patientInfoReadOnlyMode();
}

void MainWindow::patientInfoReadOnlyMode()
{
    if (!editingPatient){
        ui->stackedWidget->setCurrentWidget(ui->PatientsPage);
    } else {
        ui->patientInfo_back_button->setText("Back");
        ui->patientInfo_editsave_button->setText("Edit Patient Information");
        ui->patientInfo_firstname_display->setReadOnly(true);
        ui->patientInfo_lastname_display->setReadOnly(true);
        ui->patientInfo_firstname_display->setReadOnly(true);
        ui->patientInfo_ssn_display->setReadOnly(true);
        ui->patientInfo_dob_display->setReadOnly(true);
        ui->patientInfo_height_display->setReadOnly(true);
        ui->patientInfo_weight_display->setReadOnly(true);
        ui->patientInfo_street_display->setReadOnly(true);
        ui->patientInfo_city_display->setReadOnly(true);
        ui->patientInfo_state_display->setReadOnly(true);
        ui->patientInfo_zip_display->setReadOnly(true);
        ui->patientInfo_email_display->setReadOnly(true);
        ui->patientInfo_phone_display->setReadOnly(true);
        ui->patientInfo_ec_firstname_display->setReadOnly(true);
        ui->patientInfo_ec_lastname_display->setReadOnly(true);
        ui->patientInfo_ec_email_display->setReadOnly(true);
        ui->patientInfo_ec_phone_display->setReadOnly(true);
        editingPatient = false;
    }
}

void MainWindow::on_HomePage_ToPatientVisit_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PatientVisitPage);
}

void MainWindow::on_PatientVisit_Back_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    editingPatientID = index.sibling(index.row(),0).data().toString();



    QString title = "Patient id, " + editingPatientID;

    setWindowTitle(title);
    ui->stackedWidget->setCurrentWidget(ui->PatientInfoPage);
}


void MainWindow::on_patientInfo_editsave_button_clicked()
{
    if (!editingPatient){
        editingPatient = true;
        ui->patientInfo_editsave_button->setText("Save Changes");
        ui->patientInfo_back_button->setText("Cancel");
        ui->patientInfo_firstname_display->setReadOnly(false);
        ui->patientInfo_lastname_display->setReadOnly(false);
        ui->patientInfo_firstname_display->setReadOnly(false);
        ui->patientInfo_ssn_display->setReadOnly(false);
        ui->patientInfo_dob_display->setReadOnly(false);
        ui->patientInfo_sex_display->setEnabled(true);
        ui->patientInfo_height_display->setReadOnly(false);
        ui->patientInfo_weight_display->setReadOnly(false);
        ui->patientInfo_street_display->setReadOnly(false);
        ui->patientInfo_city_display->setReadOnly(false);
        ui->patientInfo_state_display->setReadOnly(false);
        ui->patientInfo_zip_display->setReadOnly(false);
        ui->patientInfo_email_display->setReadOnly(false);
        ui->patientInfo_phone_display->setReadOnly(false);
        ui->patientInfo_ec_firstname_display->setReadOnly(false);
        ui->patientInfo_ec_lastname_display->setReadOnly(false);
        ui->patientInfo_ec_email_display->setReadOnly(false);
        ui->patientInfo_ec_phone_display->setReadOnly(false);


    } else {
        PatientInfo patientEdits;
        patientEdits.patientFirstName = ui->patientInfo_firstname_display->text();
        patientEdits.patientLastName = ui->patientInfo_lastname_display->text();
        patientEdits.patientDOB = ui->patientInfo_dob_display->date().toString("MM/dd/yyyy");
        patientEdits.patientSex = ui->patientInfo_sex_display->currentText();
        patientEdits.patientHeight = ui->patientInfo_height_display->text();
        patientEdits.patientWeight = ui->patientInfo_weight_display->text();
        patientEdits.patientSSN = ui->patientInfo_ssn_display->text();
        patientEdits.patientAddress = ui->patientInfo_street_display->text();
        patientEdits.patientCity = ui->patientInfo_city_display->text();
        patientEdits.patientState = ui->patientInfo_state_display->text();
        patientEdits.patientZip = ui->patientInfo_zip_display->text();
        patientEdits.patientEmail = ui->patientInfo_email_display->text();
        patientEdits.patientPhone = ui->patientInfo_phone_display->text();
        patientEdits.emergencyPhone = ui->patientInfo_ec_phone_display->text();
        patientEdits.emergencyEmail = ui->patientInfo_ec_email_display->text();
        patientEdits.emergencyFirstName = ui->patientInfo_ec_firstname_display->text();
        patientEdits.emergencyLastName = ui->patientInfo_lastname_display->text();
        patientEdits.patientID = editingPatientID;

        bool editedPatient = patientEdits.handleEditPatient(patientEdits, db);
        if (editedPatient){
            ui->patientInfo_editsave_button->setText("Edit Patient Information");
            ui->patientInfo_back_button->setText("Back");
            ui->patientInfo_firstname_display->setReadOnly(true);
            ui->patientInfo_lastname_display->setReadOnly(true);
            ui->patientInfo_firstname_display->setReadOnly(true);
            ui->patientInfo_ssn_display->setReadOnly(true);
            ui->patientInfo_dob_display->setReadOnly(true);
            ui->patientInfo_height_display->setReadOnly(true);
            ui->patientInfo_weight_display->setReadOnly(true);
            ui->patientInfo_street_display->setReadOnly(true);
            ui->patientInfo_city_display->setReadOnly(true);
            ui->patientInfo_state_display->setReadOnly(true);
            ui->patientInfo_zip_display->setReadOnly(true);
            ui->patientInfo_email_display->setReadOnly(true);
            ui->patientInfo_phone_display->setReadOnly(true);
            ui->patientInfo_ec_firstname_display->setReadOnly(true);
            ui->patientInfo_ec_lastname_display->setReadOnly(true);
            ui->patientInfo_ec_email_display->setReadOnly(true);
            ui->patientInfo_ec_phone_display->setReadOnly(true);
            editingPatient = false;
            QMessageBox::information(this, "Edit Patient", "Updated patient details!");
        } else {
            QMessageBox::information(this, "Edit Patient", "Unable to confirm changes, please check for errors");
        }
    }
}


void MainWindow::on_enableAddVisit_button_clicked()
{

    QSqlQuery query_providers;
    query_providers.prepare("SELECT id, first_name || ' ' || last_name FROM providers");

    if (query_providers.exec()){
        QSqlQueryModel * model = new QSqlQueryModel();
        model->setQuery(query_providers);


        ui->AddVisit_providers_comboBox->setModel(model);
        ui->AddVisit_providers_comboBox->setModelColumn(1);
    } else {
         QMessageBox::information(this, "Connection", "Unable to Query Database");
    }


    ui->PatientInfoPage_AddVisit_dateEdit->setDate(QDate::currentDate().addDays(1));
    ui->PatientInfoPage_AddVisit_timeEdit->setTime(QTime::currentTime());

    ui->AddVisit_providers_comboBox->setCurrentIndex(-1);

    ui->AddVisit_providers_comboBox->setFocus();

    ui->addVisit_groupBox->setVisible(true);

    ui->enableAddVisit_button->setEnabled(false);
}


void MainWindow::on_cancelAddVisit_button_clicked()
{
    ui->addVisit_groupBox->setVisible(false);
    ui->enableAddVisit_button->setEnabled(true);
    ui->enableAddVisit_button->setFocus();

}


void MainWindow::on_addVisit_button_clicked()
{
    int selectedIndex = ui->AddVisit_providers_comboBox->currentIndex();

    QMessageBox::information(this, "comboBox selection", "You selected index" + QString::number(selectedIndex));

    if(selectedIndex==-1) {
        QMessageBox::information(this, "Add Visit", "select a provider to add a visit");
    }
    else {
        // consider creating a class for Visit; create an object here

        QModelIndex model_index = ui->AddVisit_providers_comboBox->model()->index(selectedIndex, 0);
        int selected_provider_id = ui->AddVisit_providers_comboBox->model()->data(model_index).toInt();

        //re-used code to parse patient_id from window title
        QString title = windowTitle();
        QStringList parts = title.split(","); // Split the title string using comma delimiter
        QString patientIdString = parts.at(1).trimmed(); // Extract the second part and remove whitespace
        int current_patient_id = patientIdString.toInt(); // Convert the patient id string to an integer

        QString selectedDate = ui->PatientInfoPage_AddVisit_dateEdit->date().toString("yyyy-MM-dd");
        QString selectedTime = ui->PatientInfoPage_AddVisit_timeEdit->time().toString("HH:mm:ss");

        QSqlQuery query_insert_visit;
        query_insert_visit.prepare("INSERT INTO patient_visits (patient_id, provider_id, datetime_occurs)"
                                   "VALUES (:patient_id, :provider_id, :date || ' ' || :time)");
        query_insert_visit.bindValue(":patient_id", current_patient_id);
        query_insert_visit.bindValue(":provider_id", selected_provider_id);
        query_insert_visit.bindValue(":date", selectedDate);
        query_insert_visit.bindValue(":time", selectedTime);

        if (query_insert_visit.exec()){

        } else {
             QMessageBox::information(this, "Connection", "Unable to Query Database");
        }

    }
}

