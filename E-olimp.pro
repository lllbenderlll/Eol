TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += \
    /home/bender/prevHome/home_6_8_2015/samples/hello-jni_____copy/jni \
    ../jni

SOURCES += main.cpp \
    ../jni/Vector_picture_static.cpp \
    ../jni/time_measure.cpp \
    ../jni/logN.cpp

DISTFILES += \
    in.txt
