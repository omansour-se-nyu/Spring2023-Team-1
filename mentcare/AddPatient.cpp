#include "AddPatient.h"

bool PatientInfo::handleAddPatient(PatientInfo patientInfo, QSqlDatabase db){
    bool detailsAreValid = validatePatientDetails(patientInfo, db);
    if (!detailsAreValid){
        return false;
    } else{
        QSqlQuery query;
        query.prepare("INSERT INTO patients (first_name, last_name, dob, sex, height, weight, ssn, street_address, city, zip_code, email, phone, ec_first_name, ec_last_name, ec_phone, ec_email)"
                      "VALUES (:first_name, :last_name, :dob, :sex, :height, :weight, :ssn, :street_address, :city, :zip_code, :email, :phone, :ec_first_name, :ec_last_name, :ec_phone, :ec_email)");
        query.bindValue(":first_name",  patientInfo.patientFirstName);
        query.bindValue(":last_name",  patientInfo.patientLastName);
        query.bindValue(":dob", patientInfo.patientDOB);
        query.bindValue(":sex", patientInfo.patientSex);
        query.bindValue(":height", patientInfo.patientHeight);
        query.bindValue(":weight", patientInfo.patientWeight);
        query.bindValue(":ssn", patientInfo.patientSSN);
        query.bindValue(":street_address", patientInfo.patientAddress);
        query.bindValue(":city",  patientInfo.patientCity);
        query.bindValue(":zip_code",  patientInfo.patientZip);
        query.bindValue(":email", patientInfo.patientEmail);
        query.bindValue(":phone", patientInfo.patientPhone);
        query.bindValue(":ec_first_name", patientInfo.emergencyFirstName);
        query.bindValue(":ec_last_name",  patientInfo.emergencyLastName);
        query.bindValue(":ec_phone", patientInfo.emergencyPhone);
        query.bindValue(":ec_email", patientInfo.emergencyEmail);

        if (query.exec()){
            db.close();
            return true;

        } else {
            db.close();
            return false;
        }
    }
};

bool PatientInfo::validatePatientDetails(PatientInfo patientInfo, QSqlDatabase db){
    if (!hasValidName(patientInfo.patientFirstName) || !hasValidName(patientInfo.patientLastName)){
        return false;
    }
    if (!hasValidEmail(patientInfo.patientEmail)){
        return false;
    }
    if (dbHasEmail(patientInfo.patientEmail, db)){
        return false;
    }
    if (!hasValidSSN(patientInfo.patientSSN)){
        return false;
    }
    if (dbHasSSN(patientInfo.patientSSN, db)){
        return false;
    }
    if (!hasValidName(patientInfo.patientCity)){
        return false;
    }
    if (!hasValidZipCode(patientInfo.patientZip)){
        return false;
    }
    if (!hasValidNumber(patientInfo.patientPhone)){
        return false;
    }
    if (!hasValidName(patientInfo.emergencyFirstName) || !hasValidName(patientInfo.emergencyLastName)){
        return false;
    }
    if (!hasValidEmail(patientInfo.emergencyEmail)){
        return false;
    }
    if (!hasValidNumber(patientInfo.emergencyPhone)){
        return false;
    }
    return true;
}

bool PatientInfo::hasValidEmail(QString email){
    static QRegularExpression emailPattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    if (emailPattern.match(email).hasMatch()){
        return true;
    } else {
        return false;
    }
};

bool PatientInfo::hasValidSSN(QString ssn){
    static QRegularExpression ssnPattern(R"(\d\d\d-\d\d-\d\d\d\d)");
    if (ssnPattern.match(ssn).hasMatch()){
        return true;
    } else {
        return false;
    }
};

bool PatientInfo::hasValidName(QString name){
    static QRegularExpression namePattern(R"(^[a-zA-Z.\- ]+$)");
    if (namePattern.match(name).hasMatch()){
        return true;
    } else {
        return false;
    }
}

bool PatientInfo::dbHasEmail(QString email, QSqlDatabase db){
    if (!db.open()) {
        db.close();
        return false;
    } else {
        QSqlQuery query;
        query.prepare("SELECT * FROM patients WHERE patients.email=:email");
        query.bindValue(":email", email);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
};

bool PatientInfo::dbHasSSN(QString ssn, QSqlDatabase db){
    if (!db.open()) {
        db.close();
        return false;
    } else {
        QSqlQuery query;
        query.prepare("SELECT * FROM patients WHERE patients.ssn=:ssn");
        query.bindValue(":ssn", ssn);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
    }
}

bool PatientInfo::hasValidZipCode(QString zipcode){
    static QRegularExpression zipPattern(R"(\d\d\d\d\d)");
    if (zipPattern.match(zipcode).hasMatch()){
        return true;
    } else {
        return false;
    }
}

bool PatientInfo::hasValidNumber(QString number){
    static QRegularExpression zipPattern(R"(\d\d\d\d\d\d\d\d\d\d)");
    if (zipPattern.match(number).hasMatch()){
        return true;
    } else {
        return false;
    }
}



void PatientInfo::populatePatientInfoPage(int patientId, QSqlDatabase db) {

//    PatientInfo currentPatient;

//    if (!db.open()) {
//        db.close();
//        return;
//    } else {
//        QSqlQuery query;
//        query.prepare("SELECT first_name FROM patients WHERE patients.id=:id");
//        query.bindValue(":id", patientId);
//        query.exec();



//        w.ui->name_display->setText(query.value(0).toString());
//    }


}
