#ifndef LOGIN_H
#define LOGIN_H

#include <Qstring>
#include <QRegularExpression>
#include <QSqlDatabase>
#include <QSqlQuery>

class Login
{
public:
    QString userEmail;
    bool success;

public slots:
    Login handleLogin(QString email, QString password, QSqlDatabase db);
};

#endif // LOGIN_H
