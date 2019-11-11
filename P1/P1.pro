TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    sf.cpp \
    boostutf.cpp

HEADERS += \
    hf.h

LIBS += -lboost_unit_test_framework
