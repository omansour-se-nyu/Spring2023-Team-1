#ifndef ADDPATIENT_H
#define ADDPATIENT_H
#include <Qstring>
#include <QRegularExpression>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>


class PatientInfo {       // The class
public:             // Access specifier
    QString patientFirstName;
    QString patientLastName;
    QString patientDOB;
    QString patientSex;
    QString patientHeight;
    QString patientWeight;
    QString patientSSN;
    QString patientAddress;
    QString patientZip;
    QString patientCity;
    QString patientState;
    QString patientEmail;
    QString patientPhone;
    QString emergencyFirstName;
    QString emergencyLastName;
    QString emergencyPhone;
    QString emergencyEmail;
    QString patientID;
    bool isValid;
    QString invalidReason;

public slots:
    bool handleAddPatient(PatientInfo patientInfo, QSqlDatabase db);
    bool handleEditPatient(PatientInfo patientInfo, QSqlDatabase db);
    void populatePatientInfoPage(int patientId, QSqlDatabase db);
    bool validatePatientDetails(PatientInfo patientInfo, QSqlDatabase db);
    bool hasValidEmail(QString email);
    bool hasValidSSN(QString ssn);
    bool hasValidName(QString name);
    bool hasValidNumber(QString number);
    bool hasValidCity(QString city);
    bool hasValidZipCode(QString zipcode);
    bool dbHasEmail(QString email, QSqlDatabase db);
    bool dbHasSSN(QString ssn, QSqlDatabase db);
\
};

#endif // ADDPATIENT_H
