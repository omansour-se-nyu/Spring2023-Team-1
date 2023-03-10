#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

#include <QString>


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
    ui->stackedWidget->setCurrentWidget(ui->HomePage);
}


void MainWindow::on_addPatientSubmitButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../mentcare.sqlite");
    if (!db.open()){
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
    } else {
        QString patientName = ui->name_line_edit_4->text();
        QString patientDOB = ui->dob_date_edit_4->text();
        QString patientSex = ui->sex_comboBox->currentText();
        QString patientHeight = ui->height_spinBox->text();
        QString patientWeight = ui->weight_spinBox->text();
        QString patientSSN = ui->ssn_lineEdit->text();
        QString patientAddress = ui->address_lineEdit->text();
        QString patientEmail = ui->email_lineEdit->text();
        QString patientPhone = ui->phone_lineEdit->text();
        QString emergencyName = ui->ec_name_lineEdit->text();
        QString emergencyPhone = ui->ec_phone_lineEdit->text();
        QString emergencyEmail = ui->ec_email_lineEdit->text();

        QSqlQuery query;
        query.prepare("INSERT INTO patients (name, dob, sex, height, weight, ssn, address, email, phone, ec_name, ec_phone, ec_email)"
                      "VALUES (:name, :dob, :sex, :height, :weight, :ssn, :address, :email, :phone, :ec_name, :ec_phone, :ec_email)");
        query.bindValue(":name",  patientName);
        query.bindValue(":dob", patientDOB);
        query.bindValue(":sex", patientSex);
        query.bindValue(":height", patientHeight);
        query.bindValue(":weight", patientWeight);
        query.bindValue(":ssn", patientSSN);
        query.bindValue(":address", patientAddress);
        query.bindValue(":email", patientEmail);
        query.bindValue(":phone", patientPhone);
        query.bindValue(":ec_name", emergencyEmail);
        query.bindValue(":ec_phone", emergencyPhone);
        query.bindValue(":ec_email", emergencyEmail);

        if (query.exec()){
            QMessageBox::information(this, "Inserted", "Successfully Added Patient");
            db.close();
            ui->stackedWidget->setCurrentWidget(ui->PatientsPage);

        } else {
            QMessageBox::information(this, "Not Inserted", "Could Not Add Patient");
            db.close();
        }
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
            query.prepare("SELECT id, name, dob, phone, email FROM patients");
            if (query.exec()){
                QSqlQueryModel * model = new QSqlQueryModel();
                model->setQuery(query);
                ui->tableView->setModel(model);
            } else {
                 QMessageBox::information(this, "Connection", "Unable to Query Database");
            }

        }
    }
}


// need to remove, just to make the code compile

void MainWindow::on_pushButton_4_clicked() {

}

void MainWindow::on_pushButton_3_clicked() {

}

void MainWindow::on_LoginButton_clicked() {

}

// code above needs to remove, just to make the code compile


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





void MainWindow::on_HomePage_ToRegisterPage_Button_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->RegisterPage);
}


void MainWindow::on_RegisterPage_LoginButton_clicked()
{
    QString email = ui->RegisterPage_LineEdit_Login_Email->text();
    QString pass1 = ui->RegisterPage_LineEdit_Login_Password->text();
    QString pass2 = ui->RegisterPage_LineEdit_Login_Password_2->text();
    if (pass1!=pass2) {
        QMessageBox::information(this, "Registration", "Passwords do not match");
        std::cout << pass1.toStdString() << std::endl << pass2.toStdString();
    } else {
        bool userAdded = newUser(email, pass1);
        if (userAdded) {
            QMessageBox::information(this, "Registration", "New user added!");
        } else {
            QMessageBox::information(this, "Registration", "Unable to add new user");
        }
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

