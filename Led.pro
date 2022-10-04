#-------------------------------------------------
#
# Project created by QtCreator 2022-10-03T18:21:05
#
#-------------------------------------------------

QT       += core
QT       += network
QT       += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Led

TEMPLATE = app

CONFIG   += console
CONFIG   -= app_bundle

SOURCES += main.cpp
SOURCES += main.cpp\
        led.cpp

HEADERS  += led.h

FORMS    += led.ui
