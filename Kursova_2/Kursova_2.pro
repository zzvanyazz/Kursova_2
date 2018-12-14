#-------------------------------------------------
#
# Project created by QtCreator 2018-11-14T18:36:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += sql
TARGET = Kursova
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    databasehelper.cpp \
    ScheduleForms/schedulemainwindow.cpp \
    ScheduleForms/quickaccesspanelitem.cpp \
    ScheduleForms/adddatawindow.cpp \
    ScheduleForms/InputForms/studenrinputform.cpp \
    ScheduleForms/InputForms/lecturerinputform.cpp \
    ScheduleForms/InputForms/subjectinputform.cpp \
    ScheduleForms/InputForms/departmentsinputform.cpp \
    ScheduleForms/InputForms/groupinputform.cpp \
    ScheduleForms/InputForms/specialiyinputform.cpp \
    ScheduleForms/InputForms/weekinputform.cpp \
    ScheduleForms/InputForms/dayinputform.cpp \
    ScheduleForms/scheduledayshowform.cpp

HEADERS += \
    databasehelper.h \
    ScheduleForms/schedulemainwindow.h \
    ScheduleForms/quickaccesspanelitem.h \
    ScheduleForms/adddatawindow.h \
    ScheduleForms/InputForms/studenrinputform.h \
    ScheduleForms/InputForms/lecturerinputform.h \
    ScheduleForms/InputForms/subjectinputform.h \
    ScheduleForms/InputForms/departmentsinputform.h \
    ScheduleForms/InputForms/groupinputform.h \
    ScheduleForms/InputForms/specialiyinputform.h \
    ScheduleForms/InputForms/weekinputform.h \
    ScheduleForms/InputForms/dayinputform.h \
    ScheduleForms/scheduledayshowform.h

FORMS += \
    ScheduleForms/schedulemainwindow.ui \
    ScheduleForms/quickaccesspanelitem.ui \
    ScheduleForms/adddatawindow.ui \
    ScheduleForms/InputForms/studenrinputform.ui \
    ScheduleForms/InputForms/lecturerinputform.ui \
    ScheduleForms/InputForms/subjectinputform.ui \
    ScheduleForms/InputForms/departmentsinputform.ui \
    ScheduleForms/InputForms/groupinputform.ui \
    ScheduleForms/InputForms/specialiyinputform.ui \
    ScheduleForms/InputForms/weekinputform.ui \
    ScheduleForms/InputForms/dayinputform.ui \
    ScheduleForms/scheduledayshowform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    diagram.qmodel

STATECHARTS +=
