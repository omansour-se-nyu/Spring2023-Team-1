#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <Qmap>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;

    const QMap<QString, QString> fixedLogin = {
        {QString("ua2047@nyu.edu"), QString("ushan")},
        {QString("xc1008@nyu.edu"), QString("jeff")},
        {QString("kod2003@nyu.edu"), QString("kobe")},
        {QString("kc4302@nyu.edu"), QString("kenneth")},
        {QString("admin"), QString("pass")}
    };
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool loginAccess(QString email, QString password);
    bool newUser(QString email, QString password);
    bool checkEmailFormat(QString email);
    bool checkEmailInDatabase(QString email);

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

    void on_HomePage_ToRegisterPage_Button_clicked();

    void on_RegisterPage_LoginButton_clicked();

    void on_RegisterPage_LoginButton_2_clicked();

    void on_PatientPage_Filter_Patient_Button_clicked();

    void on_PatientPage_Clear_Filter_Button_clicked();

private:
    Ui::MainWindow *ui;

    QString userEmail;
    QString userRole;
    QSqlDatabase db;

};
#endif // MAINWINDOW_H
