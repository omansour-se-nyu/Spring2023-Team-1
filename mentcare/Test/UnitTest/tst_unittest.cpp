//#include <QtTest>
#include <QTest>
#include <QCoreApplication>
#include "../../AddPatient.h"
#include <iostream>

// add necessary includes here

class UnitTest : public QObject
{
    Q_OBJECT

public:
    UnitTest();
    ~UnitTest();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void patientInfoTest1();
    void patientInfoTest2();
};

UnitTest::UnitTest()
{

}

UnitTest::~UnitTest()
{

}

void UnitTest::initTestCase()
{

}

void UnitTest::cleanupTestCase()
{

}

void UnitTest::patientInfoTest1()
{
    //QString testString("hello world");
    //QVERIFY(testString.toUpper() == "HELLO WORLD");
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../mentcare.sqlite");
    PatientInfo pi;
    pi.patientFirstName = "testFAIL";
    pi.patientLastName = "testFAIL";
    pi.patientDOB = "testFAIL";
    pi.patientSex = "testFAIL";
    pi.patientHeight = "testFAIL";
    pi.patientWeight = "testFAIL";
    pi.patientSSN = "testFAIL";
    pi.patientAddress = "testFAIL";
    pi.patientCity = "testFAIL";
    pi.patientZip = "testFAIL";
    pi.patientEmail = "testFAIL";
    pi.patientPhone = "testFAIL";
    pi.emergencyFirstName = "testFAIL";
    pi.emergencyLastName = "testFAIL";
    pi.emergencyPhone = "testFAIL";
    pi.emergencyEmail = "testFAIL";
    bool passed = pi.validatePatientDetails(pi, db);
    db.close();
    QVERIFY(passed==false);
}

void UnitTest::patientInfoTest2() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../mentcare.sqlite");
    PatientInfo pi;
    int random = std::rand()*1000+1;
    QString randomizer = QString::number(random);
    pi.patientFirstName = "Firsttest";
    pi.patientLastName = "LastTest";
    pi.patientDOB = "01/01/1900";
    pi.patientSex = "test";
    pi.patientHeight = "test";
    pi.patientWeight = "test";
    pi.patientSSN = "123-12-" + QString::number(random*10);
    pi.patientAddress = "test";
    pi.patientCity = "test";
    pi.patientZip = "12345";
    pi.patientEmail = randomizer+"test@test.com";
    pi.patientPhone = "0123456789";
    pi.emergencyFirstName = "Firsttest";
    pi.emergencyLastName = "Lasttest";
    pi.emergencyPhone = "0123456789";
    pi.emergencyEmail = randomizer+"test@test.com";
    bool passed = pi.validatePatientDetails(pi, db);
//    std::cout << "passed: " << passed << std::endl;
//    std::cout << "first name: " << pi.hasValidName(pi.patientFirstName) << std::endl;
//    std::cout << "last name: " << pi.hasValidName(pi.patientLastName) << std::endl;
//    std::cout << "email: " << pi.hasValidEmail(pi.patientEmail) << std::endl;
//    std::cout << "phone: " << pi.hasValidNumber(pi.patientPhone) << std::endl;
//    std::cout << "ssn: " << pi.hasValidSSN(pi.patientSSN) << std::endl;
//    std::cout << "ssn2:: " << !pi.dbHasSSN(pi.patientSSN,db) << std::endl;
//    std::cout << "city: " << pi.hasValidName(pi.patientCity) << std::endl;
//    std::cout << "zip: " << pi.hasValidZipCode(pi.patientZip) << std::endl;
//    std::cout << "e first name: " << pi.hasValidName(pi.emergencyFirstName) << std::endl;
//    std::cout << "e last name: " << pi.hasValidName(pi.emergencyLastName) << std::endl;
//    std::cout << "e email: " << pi.hasValidEmail(pi.emergencyEmail) << std::endl;
//    std::cout << "e phone: " << pi.hasValidNumber(pi.emergencyPhone) << std::endl;
    db.close();
    QVERIFY(passed==true);
}

QTEST_MAIN(UnitTest)

#include "tst_unittest.moc"
