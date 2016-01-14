#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T11:26:17
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = SimCell
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qcustomplot.cpp \
    modeldcmss.cpp \
    model.cpp \
    modelteissier.cpp \
    modelcontois.cpp \
    modelolsson.cpp \
    modelbley.cpp \
    dataloader.cpp

HEADERS  += mainwindow.h \
    qcustomplot.h \
    modeldcmss.h \
    model.h \
    modelteissier.h \
    modelcontois.h \
    modelolsson.h \
    modelbley.h \
    dataloader.h

FORMS    += mainwindow.ui

RC_FILE = SimCell.rc

RESOURCES += \
    resources.qrc
