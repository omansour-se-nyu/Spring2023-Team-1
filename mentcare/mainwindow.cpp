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


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setConnectOptions("QSQLITE_OPEN_READONLY");
    db.setDatabaseName("mentcare.sqlite");
    if (!db.open()){
        QMessageBox::information(this, "Connection", "Unable to Load Database");
        db.close();
    } else{
        QSqlQuery q;
        q.exec("SELECT * FROM patients");
        q.first();
        QString data = q.value(1).toString();
        QMessageBox::information(this, "Connection", data);
        db.close();
    }
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
        QSqlQuery query;
        query.prepare("INSERT INTO patients (name, dob)"
                      "VALUES (:name, :dob)");
        query.bindValue(":name",  patientName);
        query.bindValue(":dob", patientDOB);
        if (query.exec()){
            QMessageBox::information(this, "Inserted", "Successfully Added Patient");
            db.close();
            ui->stackedWidget->setCurrentWidget(ui->HomePage);
        } else {
            QMessageBox::information(this, "Not Inserted", "Could Not Add Patient");
            db.close();
        }
    }
}

