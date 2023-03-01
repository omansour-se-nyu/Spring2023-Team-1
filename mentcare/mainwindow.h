#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_addPatient_pushButton_clicked();

    void on_addPatientCancelButton_clicked();

    void on_addPatientSubmitButton_clicked();

    void on_patientLookupButton_clicked();

    void on_patientsPage_exit_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_pushButton_4_clicked();

    void on_LoginButton_clicked();

    void on_LoginPage_LoginButton_clicked();

    void on_pushButton_3_clicked();

    void on_HomePage_ToLoginPage_Button_clicked();

    void on_LoginPage_BackToMainButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
