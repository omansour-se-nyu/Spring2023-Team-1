/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *PatientsPage;
    QPushButton *addPatient_pushButton;
    QPushButton *patientsPage_exit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QWidget *AddPatientPage;
    QPushButton *addPatientCancelButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_4;
    QLabel *name_label_4;
    QLineEdit *name_line_edit_4;
    QLabel *dob_label_4;
    QDateEdit *dob_date_edit_4;
    QLabel *label;
    QComboBox *sex_comboBox;
    QLabel *label_2;
    QSpinBox *height_spinBox;
    QLabel *label_3;
    QSpinBox *weight_spinBox;
    QLabel *label_4;
    QLineEdit *ssn_lineEdit;
    QLabel *label_5;
    QLineEdit *address_lineEdit;
    QLabel *label_6;
    QLineEdit *email_lineEdit;
    QLabel *label_7;
    QLineEdit *phone_lineEdit;
    QLabel *label_8;
    QLineEdit *ec_name_lineEdit;
    QLabel *label_9;
    QLineEdit *ec_phone_lineEdit;
    QLabel *label_10;
    QLineEdit *ec_email_lineEdit;
    QPushButton *addPatientSubmitButton;
    QWidget *LoginPage;
    QGroupBox *LoginPage_Groupbox;
    QLabel *LoginPage_Email_label;
    QLineEdit *LoginPage_LineEdit_Login_Email;
    QLabel *LoginPage_Password_Label;
    QLineEdit *LoginPage_LineEdit_Login_Password;
    QPushButton *LoginPage_BackToMainButton;
    QPushButton *LoginPage_LoginButton;
    QWidget *page;
    QWidget *HomePage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *patientLookupButton;
    QPushButton *pushButton_2;
    QPushButton *HomePage_ToLoginPage_Button;
    QPushButton *HomePage_ToRegisterPage_Button;
    QLabel *label_12;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuMentcare;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 581));
        PatientsPage = new QWidget();
        PatientsPage->setObjectName("PatientsPage");
        addPatient_pushButton = new QPushButton(PatientsPage);
        addPatient_pushButton->setObjectName("addPatient_pushButton");
        addPatient_pushButton->setGeometry(QRect(610, 50, 171, 24));
        patientsPage_exit = new QPushButton(PatientsPage);
        patientsPage_exit->setObjectName("patientsPage_exit");
        patientsPage_exit->setGeometry(QRect(320, 520, 151, 24));
        verticalLayoutWidget_2 = new QWidget(PatientsPage);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 160, 51));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName("label_11");

        verticalLayout_2->addWidget(label_11);

        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);

        tableView = new QTableView(PatientsPage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 100, 761, 361));
        stackedWidget->addWidget(PatientsPage);
        AddPatientPage = new QWidget();
        AddPatientPage->setObjectName("AddPatientPage");
        addPatientCancelButton = new QPushButton(AddPatientPage);
        addPatientCancelButton->setObjectName("addPatientCancelButton");
        addPatientCancelButton->setGeometry(QRect(580, 530, 80, 24));
        formLayoutWidget = new QWidget(AddPatientPage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 20, 771, 491));
        formLayout_4 = new QFormLayout(formLayoutWidget);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        name_label_4 = new QLabel(formLayoutWidget);
        name_label_4->setObjectName("name_label_4");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, name_label_4);

        name_line_edit_4 = new QLineEdit(formLayoutWidget);
        name_line_edit_4->setObjectName("name_line_edit_4");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, name_line_edit_4);

        dob_label_4 = new QLabel(formLayoutWidget);
        dob_label_4->setObjectName("dob_label_4");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, dob_label_4);

        dob_date_edit_4 = new QDateEdit(formLayoutWidget);
        dob_date_edit_4->setObjectName("dob_date_edit_4");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, dob_date_edit_4);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label);

        sex_comboBox = new QComboBox(formLayoutWidget);
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->setObjectName("sex_comboBox");

        formLayout_4->setWidget(2, QFormLayout::FieldRole, sex_comboBox);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_2);

        height_spinBox = new QSpinBox(formLayoutWidget);
        height_spinBox->setObjectName("height_spinBox");

        formLayout_4->setWidget(3, QFormLayout::FieldRole, height_spinBox);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_3);

        weight_spinBox = new QSpinBox(formLayoutWidget);
        weight_spinBox->setObjectName("weight_spinBox");
        weight_spinBox->setMaximum(1000);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, weight_spinBox);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_4);

        ssn_lineEdit = new QLineEdit(formLayoutWidget);
        ssn_lineEdit->setObjectName("ssn_lineEdit");

        formLayout_4->setWidget(5, QFormLayout::FieldRole, ssn_lineEdit);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_5);

        address_lineEdit = new QLineEdit(formLayoutWidget);
        address_lineEdit->setObjectName("address_lineEdit");

        formLayout_4->setWidget(6, QFormLayout::FieldRole, address_lineEdit);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_6);

        email_lineEdit = new QLineEdit(formLayoutWidget);
        email_lineEdit->setObjectName("email_lineEdit");

        formLayout_4->setWidget(7, QFormLayout::FieldRole, email_lineEdit);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_7);

        phone_lineEdit = new QLineEdit(formLayoutWidget);
        phone_lineEdit->setObjectName("phone_lineEdit");

        formLayout_4->setWidget(8, QFormLayout::FieldRole, phone_lineEdit);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout_4->setWidget(9, QFormLayout::LabelRole, label_8);

        ec_name_lineEdit = new QLineEdit(formLayoutWidget);
        ec_name_lineEdit->setObjectName("ec_name_lineEdit");

        formLayout_4->setWidget(9, QFormLayout::FieldRole, ec_name_lineEdit);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");

        formLayout_4->setWidget(10, QFormLayout::LabelRole, label_9);

        ec_phone_lineEdit = new QLineEdit(formLayoutWidget);
        ec_phone_lineEdit->setObjectName("ec_phone_lineEdit");

        formLayout_4->setWidget(10, QFormLayout::FieldRole, ec_phone_lineEdit);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        formLayout_4->setWidget(11, QFormLayout::LabelRole, label_10);

        ec_email_lineEdit = new QLineEdit(formLayoutWidget);
        ec_email_lineEdit->setObjectName("ec_email_lineEdit");

        formLayout_4->setWidget(11, QFormLayout::FieldRole, ec_email_lineEdit);

        addPatientSubmitButton = new QPushButton(AddPatientPage);
        addPatientSubmitButton->setObjectName("addPatientSubmitButton");
        addPatientSubmitButton->setGeometry(QRect(690, 530, 80, 24));
        stackedWidget->addWidget(AddPatientPage);
        LoginPage = new QWidget();
        LoginPage->setObjectName("LoginPage");
        LoginPage_Groupbox = new QGroupBox(LoginPage);
        LoginPage_Groupbox->setObjectName("LoginPage_Groupbox");
        LoginPage_Groupbox->setGeometry(QRect(210, 170, 391, 231));
        LoginPage_Email_label = new QLabel(LoginPage_Groupbox);
        LoginPage_Email_label->setObjectName("LoginPage_Email_label");
        LoginPage_Email_label->setGeometry(QRect(30, 50, 49, 16));
        LoginPage_LineEdit_Login_Email = new QLineEdit(LoginPage_Groupbox);
        LoginPage_LineEdit_Login_Email->setObjectName("LoginPage_LineEdit_Login_Email");
        LoginPage_LineEdit_Login_Email->setGeometry(QRect(80, 50, 281, 22));
        LoginPage_Password_Label = new QLabel(LoginPage_Groupbox);
        LoginPage_Password_Label->setObjectName("LoginPage_Password_Label");
        LoginPage_Password_Label->setGeometry(QRect(20, 100, 49, 16));
        LoginPage_LineEdit_Login_Password = new QLineEdit(LoginPage_Groupbox);
        LoginPage_LineEdit_Login_Password->setObjectName("LoginPage_LineEdit_Login_Password");
        LoginPage_LineEdit_Login_Password->setGeometry(QRect(80, 100, 281, 22));
        LoginPage_LineEdit_Login_Password->setEchoMode(QLineEdit::Password);
        LoginPage_BackToMainButton = new QPushButton(LoginPage_Groupbox);
        LoginPage_BackToMainButton->setObjectName("LoginPage_BackToMainButton");
        LoginPage_BackToMainButton->setGeometry(QRect(20, 160, 161, 24));
        LoginPage_LoginButton = new QPushButton(LoginPage_Groupbox);
        LoginPage_LoginButton->setObjectName("LoginPage_LoginButton");
        LoginPage_LoginButton->setGeometry(QRect(200, 160, 161, 24));
        stackedWidget->addWidget(LoginPage);
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        HomePage = new QWidget();
        HomePage->setObjectName("HomePage");
        verticalLayoutWidget = new QWidget(HomePage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(230, 180, 321, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        patientLookupButton = new QPushButton(verticalLayoutWidget);
        patientLookupButton->setObjectName("patientLookupButton");

        verticalLayout->addWidget(patientLookupButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        HomePage_ToLoginPage_Button = new QPushButton(verticalLayoutWidget);
        HomePage_ToLoginPage_Button->setObjectName("HomePage_ToLoginPage_Button");

        verticalLayout->addWidget(HomePage_ToLoginPage_Button);

        HomePage_ToRegisterPage_Button = new QPushButton(verticalLayoutWidget);
        HomePage_ToRegisterPage_Button->setObjectName("HomePage_ToRegisterPage_Button");

        verticalLayout->addWidget(HomePage_ToRegisterPage_Button);

        label_12 = new QLabel(HomePage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(310, 50, 49, 16));
        stackedWidget->addWidget(HomePage);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMentcare = new QMenu(menubar);
        menuMentcare->setObjectName("menuMentcare");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuMentcare->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addPatient_pushButton->setText(QCoreApplication::translate("MainWindow", "Add a New Patient", nullptr));
        patientsPage_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Filter Patients:", nullptr));
        addPatientCancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        name_label_4->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        dob_label_4->setText(QCoreApplication::translate("MainWindow", "Date of Birth:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        sex_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Select", nullptr));
        sex_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Male", nullptr));
        sex_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Female", nullptr));
        sex_comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Other", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Height (inches)", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Weight (lbs)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Social Security Number", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Home Address", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Email Address:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Phone Number:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Emergency Contact Name:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Emergency Contact Number:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Emergency Contact Email:", nullptr));
        addPatientSubmitButton->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        LoginPage_Groupbox->setTitle(QCoreApplication::translate("MainWindow", "MentCare Login Form", nullptr));
        LoginPage_Email_label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        LoginPage_Password_Label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LoginPage_BackToMainButton->setText(QCoreApplication::translate("MainWindow", "Back to Main", nullptr));
        LoginPage_LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "My Calendar", nullptr));
        patientLookupButton->setText(QCoreApplication::translate("MainWindow", "Patient Lookup", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sign Out", nullptr));
        HomePage_ToLoginPage_Button->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        HomePage_ToRegisterPage_Button->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_12->setText(QString());
        menuMentcare->setTitle(QCoreApplication::translate("MainWindow", "Mentcare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
