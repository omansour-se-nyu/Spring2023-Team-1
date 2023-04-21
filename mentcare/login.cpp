#include "login.h"

Login Login::handleLogin(QString email, QString password, QSqlDatabase db) {
    Login login;
    if (!db.open()) {
        db.close();
        login.success = false;
        return login;
    } else {
        QSqlQuery query;
        query.prepare("SELECT * FROM users WHERE users.email=:loginEmail AND users.password=:loginPassword");
        query.bindValue(":loginEmail", email);
        query.bindValue(":loginPassword", password);
        if (query.exec() && query.next()) {
            login.userEmail = email;
            query.prepare("SELECT role from users WHERE users.email=:loginEmail AND users.password=:loginPassword");
            query.bindValue(":loginEmail", email);
            query.bindValue(":loginPassword", password);
            query.exec();
            query.next();
            login.userRole = query.value(0).toString();
            login.success = true;
            return login;
        } else {
            login.success = false;
            return login;
        }
    }
}

