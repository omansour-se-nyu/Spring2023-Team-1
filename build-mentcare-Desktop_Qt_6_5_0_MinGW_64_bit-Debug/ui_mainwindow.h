/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *PatientsPage;
    QLabel *label_13;
    QGridLayout *gridLayout_2;
    QLabel *PatientPage_Name_Filter_Label;
    QTableView *tableView;
    QLineEdit *PatientPage_LineEdit_Name;
    QPushButton *addPatient_pushButton;
    QPushButton *patientsPage_exit;
    QLineEdit *PatientsPage_LineEdit_Lookup_id;
    QPushButton *goToPatientInfo_button;
    QWidget *PatientInfoPage;
    QGroupBox *bio_groupBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_2;
    QLabel *patientInfo_name_label;
    QLineEdit *patientInfo_name_display;
    QHBoxLayout *horizontalLayout_2;
    QLabel *patientInfo_dob_label;
    QLineEdit *patientInfo_dob_display;
    QLabel *patientInfo_sex_label;
    QLineEdit *patientInfo_sex_display;
    QHBoxLayout *horizontalLayout_3;
    QLabel *patientInfo_ssn_label;
    QLineEdit *patientInfo_ssn_display;
    QGroupBox *contactInfo_groupBox;
    QGroupBox *emergencyContact_groupBox;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_5;
    QLabel *patientInfo_ec_phone_label;
    QLineEdit *patientInfo_ec_phone_display;
    QLabel *patientInfo_ec_email_label;
    QLineEdit *patientInfo_ec_email_display;
    QLabel *patientInfo_ec_name_label;
    QLineEdit *patientInfo_ec_name_display;
    QGroupBox *address_groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *patientInfo_street_display;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *patientInfo_city_display;
    QLineEdit *patientInfo_state_display;
    QLineEdit *patientInfo_zip_display;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *patientInfo_phone_label;
    QLineEdit *patientInfo_phone_display;
    QLabel *patientInfo_email_label;
    QLineEdit *patientInfo_email_display;
    QPushButton *patientInfo_back_button;
    QWidget *AddPatientPage;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_4;
    QLabel *name_label_4;
    QLineEdit *firstName_lineEdit;
    QLabel *label_11;
    QLineEdit *lastName_lineEdit;
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
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_6;
    QLineEdit *email_lineEdit;
    QLabel *label_7;
    QLineEdit *phone_lineEdit;
    QLabel *label_8;
    QLineEdit *ec_firstName_lineEdit;
    QLabel *label_9;
    QLineEdit *ec_phone_lineEdit;
    QLabel *label_10;
    QLineEdit *ec_email_lineEdit;
    QLineEdit *city_lineEdit;
    QLineEdit *zipcode_lineEdit;
    QLabel *label_15;
    QLineEdit *ec_lastName_lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPatientCancelButton;
    QPushButton *addPatientSubmitButton;
    QWidget *LoginPage;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *LoginPage_Groupbox;
    QFormLayout *formLayout;
    QLabel *LoginPage_Email_label;
    QLineEdit *LoginPage_LineEdit_Login_Email;
    QLabel *LoginPage_Password_Label;
    QLineEdit *LoginPage_LineEdit_Login_Password;
    QPushButton *LoginPage_LoginButton;
    QWidget *RegisterPage;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *RegisterPage_Groupbox;
    QFormLayout *formLayout_8;
    QLabel *RegisterPage_Email_label;
    QLineEdit *RegisterPage_LineEdit_Login_Email;
    QLabel *RegisterPage_Password_Label;
    QLineEdit *RegisterPage_LineEdit_Login_Password;
    QLabel *RegisterPage_Password_Label_2;
    QLineEdit *RegisterPage_LineEdit_Login_Password_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *RegisterPage_LoginButton_2;
    QPushButton *RegisterPage_LoginButton;
    QWidget *HomePage;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *patientLookupButton;
    QPushButton *HomePage_ToPatientVisit_Button;
    QPushButton *HomePage_toCalendar_Button;
    QPushButton *HomePage_ToLoginPage_Button;
    QPushButton *HomePage_ToRegisterPage_Button;
    QWidget *PatientVisitPage;
    QDateEdit *PatientVisit_DateEdit_Date;
    QTimeEdit *PatientVisit_LineEdit_Time;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *PatientVisit_LineEdit_Email;
    QLabel *label_18;
    QTextEdit *PatientVisit_LineEidt_Reason;
    QLabel *label_19;
    QLineEdit *PatientVisit_LienEdit_InsuranceCode;
    QPushButton *PatientVisit_Confirm_Button;
    QLabel *label_21;
    QPushButton *PatientVisit_Back_Button;
    QLabel *label_20;
    QLineEdit *PatientVisit_LienEdit_NotificationSetting;
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
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        PatientsPage = new QWidget();
        PatientsPage->setObjectName("PatientsPage");
        label_13 = new QLabel(PatientsPage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(310, 20, 81, 16));
        gridLayout_2 = new QGridLayout(PatientsPage);
        gridLayout_2->setObjectName("gridLayout_2");
        PatientPage_Name_Filter_Label = new QLabel(PatientsPage);
        PatientPage_Name_Filter_Label->setObjectName("PatientPage_Name_Filter_Label");

        gridLayout_2->addWidget(PatientPage_Name_Filter_Label, 0, 0, 1, 1);

        tableView = new QTableView(PatientsPage);
        tableView->setObjectName("tableView");
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(tableView, 2, 0, 1, 4);

        PatientPage_LineEdit_Name = new QLineEdit(PatientsPage);
        PatientPage_LineEdit_Name->setObjectName("PatientPage_LineEdit_Name");

        gridLayout_2->addWidget(PatientPage_LineEdit_Name, 0, 2, 1, 1);

        addPatient_pushButton = new QPushButton(PatientsPage);
        addPatient_pushButton->setObjectName("addPatient_pushButton");

        gridLayout_2->addWidget(addPatient_pushButton, 0, 3, 1, 1);

        patientsPage_exit = new QPushButton(PatientsPage);
        patientsPage_exit->setObjectName("patientsPage_exit");

        gridLayout_2->addWidget(patientsPage_exit, 5, 0, 1, 4);

        PatientsPage_LineEdit_Lookup_id = new QLineEdit(PatientsPage);
        PatientsPage_LineEdit_Lookup_id->setObjectName("PatientsPage_LineEdit_Lookup_id");

        gridLayout_2->addWidget(PatientsPage_LineEdit_Lookup_id, 3, 3, 1, 1);

        goToPatientInfo_button = new QPushButton(PatientsPage);
        goToPatientInfo_button->setObjectName("goToPatientInfo_button");

        gridLayout_2->addWidget(goToPatientInfo_button, 3, 0, 1, 3);

        stackedWidget->addWidget(PatientsPage);
        PatientInfoPage = new QWidget();
        PatientInfoPage->setObjectName("PatientInfoPage");
        bio_groupBox = new QGroupBox(PatientInfoPage);
        bio_groupBox->setObjectName("bio_groupBox");
        bio_groupBox->setGeometry(QRect(0, 0, 361, 131));
        formLayoutWidget = new QWidget(bio_groupBox);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 20, 351, 133));
        formLayout_2 = new QFormLayout(formLayoutWidget);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        patientInfo_name_label = new QLabel(formLayoutWidget);
        patientInfo_name_label->setObjectName("patientInfo_name_label");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, patientInfo_name_label);

        patientInfo_name_display = new QLineEdit(formLayoutWidget);
        patientInfo_name_display->setObjectName("patientInfo_name_display");
        patientInfo_name_display->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, patientInfo_name_display);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        patientInfo_dob_label = new QLabel(formLayoutWidget);
        patientInfo_dob_label->setObjectName("patientInfo_dob_label");

        horizontalLayout_2->addWidget(patientInfo_dob_label);

        patientInfo_dob_display = new QLineEdit(formLayoutWidget);
        patientInfo_dob_display->setObjectName("patientInfo_dob_display");

        horizontalLayout_2->addWidget(patientInfo_dob_display);

        patientInfo_sex_label = new QLabel(formLayoutWidget);
        patientInfo_sex_label->setObjectName("patientInfo_sex_label");

        horizontalLayout_2->addWidget(patientInfo_sex_label);

        patientInfo_sex_display = new QLineEdit(formLayoutWidget);
        patientInfo_sex_display->setObjectName("patientInfo_sex_display");

        horizontalLayout_2->addWidget(patientInfo_sex_display);


        formLayout_2->setLayout(1, QFormLayout::SpanningRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        patientInfo_ssn_label = new QLabel(formLayoutWidget);
        patientInfo_ssn_label->setObjectName("patientInfo_ssn_label");

        horizontalLayout_3->addWidget(patientInfo_ssn_label);

        patientInfo_ssn_display = new QLineEdit(formLayoutWidget);
        patientInfo_ssn_display->setObjectName("patientInfo_ssn_display");
        patientInfo_ssn_display->setEchoMode(QLineEdit::Normal);

        horizontalLayout_3->addWidget(patientInfo_ssn_display);


        formLayout_2->setLayout(2, QFormLayout::SpanningRole, horizontalLayout_3);

        contactInfo_groupBox = new QGroupBox(PatientInfoPage);
        contactInfo_groupBox->setObjectName("contactInfo_groupBox");
        contactInfo_groupBox->setGeometry(QRect(0, 150, 661, 251));
        emergencyContact_groupBox = new QGroupBox(contactInfo_groupBox);
        emergencyContact_groupBox->setObjectName("emergencyContact_groupBox");
        emergencyContact_groupBox->setGeometry(QRect(0, 120, 311, 121));
        formLayoutWidget_3 = new QWidget(emergencyContact_groupBox);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(20, 30, 221, 82));
        formLayout_5 = new QFormLayout(formLayoutWidget_3);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        patientInfo_ec_phone_label = new QLabel(formLayoutWidget_3);
        patientInfo_ec_phone_label->setObjectName("patientInfo_ec_phone_label");

        formLayout_5->setWidget(1, QFormLayout::LabelRole, patientInfo_ec_phone_label);

        patientInfo_ec_phone_display = new QLineEdit(formLayoutWidget_3);
        patientInfo_ec_phone_display->setObjectName("patientInfo_ec_phone_display");
        patientInfo_ec_phone_display->setReadOnly(false);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, patientInfo_ec_phone_display);

        patientInfo_ec_email_label = new QLabel(formLayoutWidget_3);
        patientInfo_ec_email_label->setObjectName("patientInfo_ec_email_label");

        formLayout_5->setWidget(2, QFormLayout::LabelRole, patientInfo_ec_email_label);

        patientInfo_ec_email_display = new QLineEdit(formLayoutWidget_3);
        patientInfo_ec_email_display->setObjectName("patientInfo_ec_email_display");

        formLayout_5->setWidget(2, QFormLayout::FieldRole, patientInfo_ec_email_display);

        patientInfo_ec_name_label = new QLabel(formLayoutWidget_3);
        patientInfo_ec_name_label->setObjectName("patientInfo_ec_name_label");

        formLayout_5->setWidget(0, QFormLayout::LabelRole, patientInfo_ec_name_label);

        patientInfo_ec_name_display = new QLineEdit(formLayoutWidget_3);
        patientInfo_ec_name_display->setObjectName("patientInfo_ec_name_display");

        formLayout_5->setWidget(0, QFormLayout::FieldRole, patientInfo_ec_name_display);

        address_groupBox = new QGroupBox(contactInfo_groupBox);
        address_groupBox->setObjectName("address_groupBox");
        address_groupBox->setGeometry(QRect(0, 20, 371, 81));
        verticalLayoutWidget = new QWidget(address_groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 20, 351, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        patientInfo_street_display = new QLineEdit(verticalLayoutWidget);
        patientInfo_street_display->setObjectName("patientInfo_street_display");

        verticalLayout_5->addWidget(patientInfo_street_display);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        patientInfo_city_display = new QLineEdit(verticalLayoutWidget);
        patientInfo_city_display->setObjectName("patientInfo_city_display");

        horizontalLayout_6->addWidget(patientInfo_city_display);

        patientInfo_state_display = new QLineEdit(verticalLayoutWidget);
        patientInfo_state_display->setObjectName("patientInfo_state_display");

        horizontalLayout_6->addWidget(patientInfo_state_display);

        patientInfo_zip_display = new QLineEdit(verticalLayoutWidget);
        patientInfo_zip_display->setObjectName("patientInfo_zip_display");

        horizontalLayout_6->addWidget(patientInfo_zip_display);


        verticalLayout_5->addLayout(horizontalLayout_6);

        formLayoutWidget_2 = new QWidget(contactInfo_groupBox);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(390, 30, 201, 61));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        patientInfo_phone_label = new QLabel(formLayoutWidget_2);
        patientInfo_phone_label->setObjectName("patientInfo_phone_label");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, patientInfo_phone_label);

        patientInfo_phone_display = new QLineEdit(formLayoutWidget_2);
        patientInfo_phone_display->setObjectName("patientInfo_phone_display");
        patientInfo_phone_display->setEnabled(true);
        patientInfo_phone_display->setReadOnly(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, patientInfo_phone_display);

        patientInfo_email_label = new QLabel(formLayoutWidget_2);
        patientInfo_email_label->setObjectName("patientInfo_email_label");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, patientInfo_email_label);

        patientInfo_email_display = new QLineEdit(formLayoutWidget_2);
        patientInfo_email_display->setObjectName("patientInfo_email_display");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, patientInfo_email_display);

        patientInfo_back_button = new QPushButton(PatientInfoPage);
        patientInfo_back_button->setObjectName("patientInfo_back_button");
        patientInfo_back_button->setGeometry(QRect(570, 370, 191, 31));
        stackedWidget->addWidget(PatientInfoPage);
        AddPatientPage = new QWidget();
        AddPatientPage->setObjectName("AddPatientPage");
        verticalLayout_2 = new QVBoxLayout(AddPatientPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName("formLayout_4");
        name_label_4 = new QLabel(AddPatientPage);
        name_label_4->setObjectName("name_label_4");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, name_label_4);

        firstName_lineEdit = new QLineEdit(AddPatientPage);
        firstName_lineEdit->setObjectName("firstName_lineEdit");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, firstName_lineEdit);

        label_11 = new QLabel(AddPatientPage);
        label_11->setObjectName("label_11");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        lastName_lineEdit = new QLineEdit(AddPatientPage);
        lastName_lineEdit->setObjectName("lastName_lineEdit");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lastName_lineEdit);

        dob_label_4 = new QLabel(AddPatientPage);
        dob_label_4->setObjectName("dob_label_4");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, dob_label_4);

        dob_date_edit_4 = new QDateEdit(AddPatientPage);
        dob_date_edit_4->setObjectName("dob_date_edit_4");

        formLayout_4->setWidget(2, QFormLayout::FieldRole, dob_date_edit_4);

        label = new QLabel(AddPatientPage);
        label->setObjectName("label");

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label);

        sex_comboBox = new QComboBox(AddPatientPage);
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->addItem(QString());
        sex_comboBox->setObjectName("sex_comboBox");

        formLayout_4->setWidget(3, QFormLayout::FieldRole, sex_comboBox);

        label_2 = new QLabel(AddPatientPage);
        label_2->setObjectName("label_2");

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_2);

        height_spinBox = new QSpinBox(AddPatientPage);
        height_spinBox->setObjectName("height_spinBox");

        formLayout_4->setWidget(4, QFormLayout::FieldRole, height_spinBox);

        label_3 = new QLabel(AddPatientPage);
        label_3->setObjectName("label_3");

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_3);

        weight_spinBox = new QSpinBox(AddPatientPage);
        weight_spinBox->setObjectName("weight_spinBox");
        weight_spinBox->setMaximum(1000);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, weight_spinBox);

        label_4 = new QLabel(AddPatientPage);
        label_4->setObjectName("label_4");

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_4);

        ssn_lineEdit = new QLineEdit(AddPatientPage);
        ssn_lineEdit->setObjectName("ssn_lineEdit");

        formLayout_4->setWidget(6, QFormLayout::FieldRole, ssn_lineEdit);

        label_5 = new QLabel(AddPatientPage);
        label_5->setObjectName("label_5");

        formLayout_4->setWidget(7, QFormLayout::LabelRole, label_5);

        address_lineEdit = new QLineEdit(AddPatientPage);
        address_lineEdit->setObjectName("address_lineEdit");

        formLayout_4->setWidget(7, QFormLayout::FieldRole, address_lineEdit);

        label_14 = new QLabel(AddPatientPage);
        label_14->setObjectName("label_14");

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_14);

        label_12 = new QLabel(AddPatientPage);
        label_12->setObjectName("label_12");

        formLayout_4->setWidget(9, QFormLayout::LabelRole, label_12);

        label_6 = new QLabel(AddPatientPage);
        label_6->setObjectName("label_6");

        formLayout_4->setWidget(10, QFormLayout::LabelRole, label_6);

        email_lineEdit = new QLineEdit(AddPatientPage);
        email_lineEdit->setObjectName("email_lineEdit");

        formLayout_4->setWidget(10, QFormLayout::FieldRole, email_lineEdit);

        label_7 = new QLabel(AddPatientPage);
        label_7->setObjectName("label_7");

        formLayout_4->setWidget(11, QFormLayout::LabelRole, label_7);

        phone_lineEdit = new QLineEdit(AddPatientPage);
        phone_lineEdit->setObjectName("phone_lineEdit");

        formLayout_4->setWidget(11, QFormLayout::FieldRole, phone_lineEdit);

        label_8 = new QLabel(AddPatientPage);
        label_8->setObjectName("label_8");

        formLayout_4->setWidget(12, QFormLayout::LabelRole, label_8);

        ec_firstName_lineEdit = new QLineEdit(AddPatientPage);
        ec_firstName_lineEdit->setObjectName("ec_firstName_lineEdit");

        formLayout_4->setWidget(12, QFormLayout::FieldRole, ec_firstName_lineEdit);

        label_9 = new QLabel(AddPatientPage);
        label_9->setObjectName("label_9");

        formLayout_4->setWidget(14, QFormLayout::LabelRole, label_9);

        ec_phone_lineEdit = new QLineEdit(AddPatientPage);
        ec_phone_lineEdit->setObjectName("ec_phone_lineEdit");

        formLayout_4->setWidget(14, QFormLayout::FieldRole, ec_phone_lineEdit);

        label_10 = new QLabel(AddPatientPage);
        label_10->setObjectName("label_10");

        formLayout_4->setWidget(15, QFormLayout::LabelRole, label_10);

        ec_email_lineEdit = new QLineEdit(AddPatientPage);
        ec_email_lineEdit->setObjectName("ec_email_lineEdit");

        formLayout_4->setWidget(15, QFormLayout::FieldRole, ec_email_lineEdit);

        city_lineEdit = new QLineEdit(AddPatientPage);
        city_lineEdit->setObjectName("city_lineEdit");

        formLayout_4->setWidget(8, QFormLayout::FieldRole, city_lineEdit);

        zipcode_lineEdit = new QLineEdit(AddPatientPage);
        zipcode_lineEdit->setObjectName("zipcode_lineEdit");

        formLayout_4->setWidget(9, QFormLayout::FieldRole, zipcode_lineEdit);

        label_15 = new QLabel(AddPatientPage);
        label_15->setObjectName("label_15");

        formLayout_4->setWidget(13, QFormLayout::LabelRole, label_15);

        ec_lastName_lineEdit = new QLineEdit(AddPatientPage);
        ec_lastName_lineEdit->setObjectName("ec_lastName_lineEdit");

        formLayout_4->setWidget(13, QFormLayout::FieldRole, ec_lastName_lineEdit);


        verticalLayout_2->addLayout(formLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addPatientCancelButton = new QPushButton(AddPatientPage);
        addPatientCancelButton->setObjectName("addPatientCancelButton");

        horizontalLayout->addWidget(addPatientCancelButton);

        addPatientSubmitButton = new QPushButton(AddPatientPage);
        addPatientSubmitButton->setObjectName("addPatientSubmitButton");

        horizontalLayout->addWidget(addPatientSubmitButton);


        verticalLayout_2->addLayout(horizontalLayout);

        stackedWidget->addWidget(AddPatientPage);
        LoginPage = new QWidget();
        LoginPage->setObjectName("LoginPage");
        verticalLayout_6 = new QVBoxLayout(LoginPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        LoginPage_Groupbox = new QGroupBox(LoginPage);
        LoginPage_Groupbox->setObjectName("LoginPage_Groupbox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginPage_Groupbox->sizePolicy().hasHeightForWidth());
        LoginPage_Groupbox->setSizePolicy(sizePolicy);
        LoginPage_Groupbox->setMinimumSize(QSize(0, 35));
        formLayout = new QFormLayout(LoginPage_Groupbox);
        formLayout->setObjectName("formLayout");
        LoginPage_Email_label = new QLabel(LoginPage_Groupbox);
        LoginPage_Email_label->setObjectName("LoginPage_Email_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, LoginPage_Email_label);

        LoginPage_LineEdit_Login_Email = new QLineEdit(LoginPage_Groupbox);
        LoginPage_LineEdit_Login_Email->setObjectName("LoginPage_LineEdit_Login_Email");

        formLayout->setWidget(0, QFormLayout::FieldRole, LoginPage_LineEdit_Login_Email);

        LoginPage_Password_Label = new QLabel(LoginPage_Groupbox);
        LoginPage_Password_Label->setObjectName("LoginPage_Password_Label");

        formLayout->setWidget(1, QFormLayout::LabelRole, LoginPage_Password_Label);

        LoginPage_LineEdit_Login_Password = new QLineEdit(LoginPage_Groupbox);
        LoginPage_LineEdit_Login_Password->setObjectName("LoginPage_LineEdit_Login_Password");
        LoginPage_LineEdit_Login_Password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, LoginPage_LineEdit_Login_Password);

        LoginPage_LoginButton = new QPushButton(LoginPage_Groupbox);
        LoginPage_LoginButton->setObjectName("LoginPage_LoginButton");

        formLayout->setWidget(2, QFormLayout::FieldRole, LoginPage_LoginButton);


        verticalLayout_6->addWidget(LoginPage_Groupbox, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        stackedWidget->addWidget(LoginPage);
        RegisterPage = new QWidget();
        RegisterPage->setObjectName("RegisterPage");
        horizontalLayout_5 = new QHBoxLayout(RegisterPage);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        RegisterPage_Groupbox = new QGroupBox(RegisterPage);
        RegisterPage_Groupbox->setObjectName("RegisterPage_Groupbox");
        formLayout_8 = new QFormLayout(RegisterPage_Groupbox);
        formLayout_8->setObjectName("formLayout_8");
        RegisterPage_Email_label = new QLabel(RegisterPage_Groupbox);
        RegisterPage_Email_label->setObjectName("RegisterPage_Email_label");

        formLayout_8->setWidget(0, QFormLayout::LabelRole, RegisterPage_Email_label);

        RegisterPage_LineEdit_Login_Email = new QLineEdit(RegisterPage_Groupbox);
        RegisterPage_LineEdit_Login_Email->setObjectName("RegisterPage_LineEdit_Login_Email");

        formLayout_8->setWidget(0, QFormLayout::FieldRole, RegisterPage_LineEdit_Login_Email);

        RegisterPage_Password_Label = new QLabel(RegisterPage_Groupbox);
        RegisterPage_Password_Label->setObjectName("RegisterPage_Password_Label");

        formLayout_8->setWidget(1, QFormLayout::LabelRole, RegisterPage_Password_Label);

        RegisterPage_LineEdit_Login_Password = new QLineEdit(RegisterPage_Groupbox);
        RegisterPage_LineEdit_Login_Password->setObjectName("RegisterPage_LineEdit_Login_Password");
        RegisterPage_LineEdit_Login_Password->setEchoMode(QLineEdit::Password);

        formLayout_8->setWidget(1, QFormLayout::FieldRole, RegisterPage_LineEdit_Login_Password);

        RegisterPage_Password_Label_2 = new QLabel(RegisterPage_Groupbox);
        RegisterPage_Password_Label_2->setObjectName("RegisterPage_Password_Label_2");

        formLayout_8->setWidget(2, QFormLayout::LabelRole, RegisterPage_Password_Label_2);

        RegisterPage_LineEdit_Login_Password_2 = new QLineEdit(RegisterPage_Groupbox);
        RegisterPage_LineEdit_Login_Password_2->setObjectName("RegisterPage_LineEdit_Login_Password_2");
        RegisterPage_LineEdit_Login_Password_2->setEchoMode(QLineEdit::Password);

        formLayout_8->setWidget(2, QFormLayout::FieldRole, RegisterPage_LineEdit_Login_Password_2);


        verticalLayout_4->addWidget(RegisterPage_Groupbox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        RegisterPage_LoginButton_2 = new QPushButton(RegisterPage);
        RegisterPage_LoginButton_2->setObjectName("RegisterPage_LoginButton_2");

        horizontalLayout_4->addWidget(RegisterPage_LoginButton_2);

        RegisterPage_LoginButton = new QPushButton(RegisterPage);
        RegisterPage_LoginButton->setObjectName("RegisterPage_LoginButton");

        horizontalLayout_4->addWidget(RegisterPage_LoginButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);

        stackedWidget->addWidget(RegisterPage);
        HomePage = new QWidget();
        HomePage->setObjectName("HomePage");
        verticalLayout_3 = new QVBoxLayout(HomePage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(200, -1, 200, -1);
        patientLookupButton = new QPushButton(HomePage);
        patientLookupButton->setObjectName("patientLookupButton");

        verticalLayout->addWidget(patientLookupButton);

        HomePage_ToPatientVisit_Button = new QPushButton(HomePage);
        HomePage_ToPatientVisit_Button->setObjectName("HomePage_ToPatientVisit_Button");

        verticalLayout->addWidget(HomePage_ToPatientVisit_Button);

        HomePage_toCalendar_Button = new QPushButton(HomePage);
        HomePage_toCalendar_Button->setObjectName("HomePage_toCalendar_Button");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HomePage_toCalendar_Button->sizePolicy().hasHeightForWidth());
        HomePage_toCalendar_Button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(HomePage_toCalendar_Button);

        HomePage_ToLoginPage_Button = new QPushButton(HomePage);
        HomePage_ToLoginPage_Button->setObjectName("HomePage_ToLoginPage_Button");

        verticalLayout->addWidget(HomePage_ToLoginPage_Button);

        HomePage_ToRegisterPage_Button = new QPushButton(HomePage);
        HomePage_ToRegisterPage_Button->setObjectName("HomePage_ToRegisterPage_Button");

        verticalLayout->addWidget(HomePage_ToRegisterPage_Button);


        verticalLayout_3->addLayout(verticalLayout);

        stackedWidget->addWidget(HomePage);
        PatientVisitPage = new QWidget();
        PatientVisitPage->setObjectName("PatientVisitPage");
        PatientVisit_DateEdit_Date = new QDateEdit(PatientVisitPage);
        PatientVisit_DateEdit_Date->setObjectName("PatientVisit_DateEdit_Date");
        PatientVisit_DateEdit_Date->setGeometry(QRect(140, 90, 110, 22));
        PatientVisit_DateEdit_Date->setDateTime(QDateTime(QDate(2023, 5, 12), QTime(23, 0, 0)));
        PatientVisit_DateEdit_Date->setCalendarPopup(true);
        PatientVisit_LineEdit_Time = new QTimeEdit(PatientVisitPage);
        PatientVisit_LineEdit_Time->setObjectName("PatientVisit_LineEdit_Time");
        PatientVisit_LineEdit_Time->setGeometry(QRect(270, 90, 118, 22));
        PatientVisit_LineEdit_Time->setCalendarPopup(true);
        label_16 = new QLabel(PatientVisitPage);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 90, 101, 20));
        label_17 = new QLabel(PatientVisitPage);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 50, 101, 20));
        PatientVisit_LineEdit_Email = new QLineEdit(PatientVisitPage);
        PatientVisit_LineEdit_Email->setObjectName("PatientVisit_LineEdit_Email");
        PatientVisit_LineEdit_Email->setGeometry(QRect(80, 50, 301, 22));
        label_18 = new QLabel(PatientVisitPage);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 126, 121, 20));
        PatientVisit_LineEidt_Reason = new QTextEdit(PatientVisitPage);
        PatientVisit_LineEidt_Reason->setObjectName("PatientVisit_LineEidt_Reason");
        PatientVisit_LineEidt_Reason->setGeometry(QRect(30, 160, 351, 131));
        label_19 = new QLabel(PatientVisitPage);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 310, 111, 16));
        PatientVisit_LienEdit_InsuranceCode = new QLineEdit(PatientVisitPage);
        PatientVisit_LienEdit_InsuranceCode->setObjectName("PatientVisit_LienEdit_InsuranceCode");
        PatientVisit_LienEdit_InsuranceCode->setGeometry(QRect(30, 340, 113, 22));
        PatientVisit_Confirm_Button = new QPushButton(PatientVisitPage);
        PatientVisit_Confirm_Button->setObjectName("PatientVisit_Confirm_Button");
        PatientVisit_Confirm_Button->setGeometry(QRect(30, 390, 351, 24));
        label_21 = new QLabel(PatientVisitPage);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(30, 10, 131, 16));
        PatientVisit_Back_Button = new QPushButton(PatientVisitPage);
        PatientVisit_Back_Button->setObjectName("PatientVisit_Back_Button");
        PatientVisit_Back_Button->setGeometry(QRect(30, 430, 351, 24));
        label_20 = new QLabel(PatientVisitPage);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(160, 310, 271, 16));
        PatientVisit_LienEdit_NotificationSetting = new QLineEdit(PatientVisitPage);
        PatientVisit_LienEdit_NotificationSetting->setObjectName("PatientVisit_LienEdit_NotificationSetting");
        PatientVisit_LienEdit_NotificationSetting->setGeometry(QRect(160, 340, 221, 22));
        stackedWidget->addWidget(PatientVisitPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

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
        QWidget::setTabOrder(LoginPage_LineEdit_Login_Email, LoginPage_LineEdit_Login_Password);
        QWidget::setTabOrder(LoginPage_LineEdit_Login_Password, LoginPage_LoginButton);
        QWidget::setTabOrder(LoginPage_LoginButton, patientLookupButton);
        QWidget::setTabOrder(patientLookupButton, HomePage_ToLoginPage_Button);
        QWidget::setTabOrder(HomePage_ToLoginPage_Button, HomePage_ToRegisterPage_Button);
        QWidget::setTabOrder(HomePage_ToRegisterPage_Button, PatientPage_LineEdit_Name);
        QWidget::setTabOrder(PatientPage_LineEdit_Name, addPatient_pushButton);
        QWidget::setTabOrder(addPatient_pushButton, tableView);
        QWidget::setTabOrder(tableView, patientsPage_exit);
        QWidget::setTabOrder(patientsPage_exit, firstName_lineEdit);
        QWidget::setTabOrder(firstName_lineEdit, lastName_lineEdit);
        QWidget::setTabOrder(lastName_lineEdit, dob_date_edit_4);
        QWidget::setTabOrder(dob_date_edit_4, sex_comboBox);
        QWidget::setTabOrder(sex_comboBox, height_spinBox);
        QWidget::setTabOrder(height_spinBox, weight_spinBox);
        QWidget::setTabOrder(weight_spinBox, ssn_lineEdit);
        QWidget::setTabOrder(ssn_lineEdit, address_lineEdit);
        QWidget::setTabOrder(address_lineEdit, city_lineEdit);
        QWidget::setTabOrder(city_lineEdit, zipcode_lineEdit);
        QWidget::setTabOrder(zipcode_lineEdit, email_lineEdit);
        QWidget::setTabOrder(email_lineEdit, phone_lineEdit);
        QWidget::setTabOrder(phone_lineEdit, ec_firstName_lineEdit);
        QWidget::setTabOrder(ec_firstName_lineEdit, ec_lastName_lineEdit);
        QWidget::setTabOrder(ec_lastName_lineEdit, ec_phone_lineEdit);
        QWidget::setTabOrder(ec_phone_lineEdit, ec_email_lineEdit);
        QWidget::setTabOrder(ec_email_lineEdit, addPatientCancelButton);
        QWidget::setTabOrder(addPatientCancelButton, addPatientSubmitButton);
        QWidget::setTabOrder(addPatientSubmitButton, RegisterPage_LineEdit_Login_Email);
        QWidget::setTabOrder(RegisterPage_LineEdit_Login_Email, RegisterPage_LineEdit_Login_Password);
        QWidget::setTabOrder(RegisterPage_LineEdit_Login_Password, RegisterPage_LineEdit_Login_Password_2);
        QWidget::setTabOrder(RegisterPage_LineEdit_Login_Password_2, RegisterPage_LoginButton_2);
        QWidget::setTabOrder(RegisterPage_LoginButton_2, RegisterPage_LoginButton);

        menubar->addAction(menuMentcare->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(LoginPage_LineEdit_Login_Password, &QLineEdit::returnPressed, LoginPage_LoginButton, qOverload<>(&QPushButton::click));
        QObject::connect(LoginPage_LineEdit_Login_Email, &QLineEdit::returnPressed, LoginPage_LoginButton, qOverload<>(&QPushButton::click));

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_13->setText(QString());
        PatientPage_Name_Filter_Label->setText(QCoreApplication::translate("MainWindow", "Patient Name", nullptr));
        addPatient_pushButton->setText(QCoreApplication::translate("MainWindow", "Add a New Patient", nullptr));
        patientsPage_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        goToPatientInfo_button->setText(QCoreApplication::translate("MainWindow", "Viw Patient Information By User Id", nullptr));
        bio_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Biographical", nullptr));
        patientInfo_name_label->setText(QCoreApplication::translate("MainWindow", "Full Name:", nullptr));
        patientInfo_name_display->setText(QCoreApplication::translate("MainWindow", "Kenneth Chung", nullptr));
        patientInfo_dob_label->setText(QCoreApplication::translate("MainWindow", "Date of Birth:", nullptr));
        patientInfo_sex_label->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        patientInfo_sex_display->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        patientInfo_ssn_label->setText(QCoreApplication::translate("MainWindow", "SSN:", nullptr));
        patientInfo_ssn_display->setText(QString());
        contactInfo_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Contact Info", nullptr));
        emergencyContact_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Emergency Contact Info", nullptr));
        patientInfo_ec_phone_label->setText(QCoreApplication::translate("MainWindow", "Phone:", nullptr));
        patientInfo_ec_phone_display->setText(QCoreApplication::translate("MainWindow", "800-555-5555", nullptr));
        patientInfo_ec_email_label->setText(QCoreApplication::translate("MainWindow", "E-mail:", nullptr));
        patientInfo_ec_email_display->setText(QString());
        patientInfo_ec_name_label->setText(QCoreApplication::translate("MainWindow", "Full Name:", nullptr));
        patientInfo_ec_name_display->setText(QCoreApplication::translate("MainWindow", "Someone Else", nullptr));
        address_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Home Address", nullptr));
        patientInfo_street_display->setText(QCoreApplication::translate("MainWindow", "6 MetroTech Center", nullptr));
        patientInfo_city_display->setText(QCoreApplication::translate("MainWindow", "Brooklyn", nullptr));
        patientInfo_state_display->setText(QCoreApplication::translate("MainWindow", "NY", nullptr));
        patientInfo_zip_display->setText(QCoreApplication::translate("MainWindow", "11201", nullptr));
        patientInfo_phone_label->setText(QCoreApplication::translate("MainWindow", "Phone:", nullptr));
        patientInfo_phone_display->setText(QCoreApplication::translate("MainWindow", "800-888-8888", nullptr));
        patientInfo_email_label->setText(QCoreApplication::translate("MainWindow", "E-mail:", nullptr));
        patientInfo_email_display->setText(QCoreApplication::translate("MainWindow", "kc4302@nyu.edu", nullptr));
        patientInfo_back_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        name_label_4->setText(QCoreApplication::translate("MainWindow", "First Name:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Last Name:", nullptr));
        dob_label_4->setText(QCoreApplication::translate("MainWindow", "Date of Birth:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        sex_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Select", nullptr));
        sex_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Male", nullptr));
        sex_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Female", nullptr));
        sex_comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Other", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Height (inches):", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Weight (lbs):", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Social Security Number:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Street Address:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "City:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Zip Code:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Email Address:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Phone Number:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Emergency Contact First Name:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Emergency Contact Number:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Emergency Contact Email:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Emergency Contact Last Name:", nullptr));
        addPatientCancelButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        addPatientSubmitButton->setText(QCoreApplication::translate("MainWindow", "Add Patient", nullptr));
        LoginPage_Groupbox->setTitle(QCoreApplication::translate("MainWindow", "MentCare Login Form", nullptr));
        LoginPage_Email_label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        LoginPage_Password_Label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LoginPage_LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        RegisterPage_Groupbox->setTitle(QCoreApplication::translate("MainWindow", "MentCare Login Form", nullptr));
        RegisterPage_Email_label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        RegisterPage_Password_Label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        RegisterPage_Password_Label_2->setText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        RegisterPage_LoginButton_2->setText(QCoreApplication::translate("MainWindow", "Return to Home", nullptr));
        RegisterPage_LoginButton->setText(QCoreApplication::translate("MainWindow", "Create User", nullptr));
        patientLookupButton->setText(QCoreApplication::translate("MainWindow", "Patient Lookup", nullptr));
        HomePage_ToPatientVisit_Button->setText(QCoreApplication::translate("MainWindow", "Patient Visit", nullptr));
        HomePage_toCalendar_Button->setText(QCoreApplication::translate("MainWindow", "My Calendar", nullptr));
        HomePage_ToLoginPage_Button->setText(QCoreApplication::translate("MainWindow", "Sign Out", nullptr));
        HomePage_ToRegisterPage_Button->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Visit Date / Time", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Reason for visiting", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Insurance code", nullptr));
        PatientVisit_Confirm_Button->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Make a visit", nullptr));
        PatientVisit_Back_Button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Receive Notification (NA / Email / Phone)", nullptr));
        menuMentcare->setTitle(QCoreApplication::translate("MainWindow", "Mentcare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
