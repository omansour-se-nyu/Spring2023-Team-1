QT += testlib
QT += gui sql core widgets
CONFIG += qt warn_on depend_includepath testcase c++17

TEMPLATE = app

SOURCES +=  tst_unittest.cpp \
    ../../AddPatient.cpp \
    ../../mainwindow.cpp

HEADERS += \
    ../../AddPatient.h \
    ../../mainwindow.h

FORMS += \
    ../../mainwindow.ui
