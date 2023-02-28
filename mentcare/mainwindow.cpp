#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
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
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("../mentcare.sqlite");
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
            db.close();
        }
    }
}

