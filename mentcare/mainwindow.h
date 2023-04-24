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

    bool newUser(QString email, QString password, QString role, int roleLevel);
    bool checkEmailFormat(QString email);
    bool checkEmailInDatabase(QString email);
    void enableHomePageAccess(QString role);
    void patientInfoReadOnlyMode();

    bool queryVisitsByPatient(int patient_id);

    bool editingPatient = false;
    QString editingPatientID;

private slots:

    void on_addPatient_pushButton_clicked();

    void on_addPatientCancelButton_clicked();

    void on_addPatientSubmitButton_clicked();

    void on_patientLookupButton_clicked();

    void on_patientsPage_exit_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_LoginPage_LoginButton_clicked();

    void on_HomePage_ToLoginPage_Button_clicked();

    void on_LoginPage_BackToMainButton_clicked();

    void on_HomePage_ToRegisterPage_Button_clicked();

    void on_RegisterPage_LoginButton_clicked();

    void on_RegisterPage_LoginButton_2_clicked();

//    void on_PatientPage_Filter_Patient_Button_clicked();

//    void on_PatientPage_Clear_Filter_Button_clicked();

    void on_PatientPage_LineEdit_Name_textEdited(const QString &arg1);

//    void on_show_snn_button_toggled(bool checked);

    void on_toggleVisible_snn_button_toggled(bool checked);

//    void on_toggleVisible_snn_button_clicked();

    void on_goToPatientInfo_button_clicked();

    void on_PatientInfoPage_windowTitleChanged(const QString &title);

    void on_PatientInfoPage_windowIconTextChanged(const QString &iconText);

    void on_patientInfo_back_button_clicked();

    void on_HomePage_ToPatientVisit_Button_clicked();

    void on_PatientVisit_Back_Button_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_patientInfo_editsave_button_clicked();

    void on_enableAddVisit_button_clicked();

    void on_cancelAddVisit_button_clicked();

    void on_addVisit_button_clicked();

private:
    Ui::MainWindow *ui;

    QString userEmail;
    QString userRole;
    QSqlDatabase db;

};
#endif // MAINWINDOW_H
