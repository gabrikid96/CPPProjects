TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    persona.cpp \
    conjuntpersones.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    persona.h \
    conjuntpersones.h

