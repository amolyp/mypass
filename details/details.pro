#-------------------------------------------------
#
# Project created by QtCreator 2015-11-02T15:38:33
#
#-------------------------------------------------

QT       += core gui\
            sql

TARGET = details
TEMPLATE = app


SOURCES += main.cpp\
        summary.cpp \
    datamanager.cpp \
    adddata.cpp \
    viewdata.cpp \
    simplecrypt.cpp

HEADERS  += summary.h \
    datamanager.h \
    adddata.h \
    viewdata.h \
    simplecrypt.h

FORMS    += summary.ui \
    adddata.ui \
    viewdata.ui
