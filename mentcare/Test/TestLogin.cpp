#include <QtTest/QTest>
#include <iostream>
#include "mainwindow.h"

class TestLogin: public QObject
{
    Q_OBJECT
private slots:
    void testLoginAccess();
};

void TestLogin::testLoginAccess() {
    MainWindow m;
    QString inEmail = "admin";
    QString inPass = "pass";
    QCOMPARE(m.loginAccess(inEmail, inPass), true);
}

QTEST_MAIN(TestLogin)
#include "testlogin.moc"
