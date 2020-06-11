#-------------------------------------------------
#
# Project created by QtCreator 2020-05-25T12:56:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
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
    MainWindow.cpp \
    Guest.cpp \
    Movie.cpp \
    DialogRegister.cpp \
    DialogLogin.cpp \
    DialogAddMovie.cpp \
    Admin.cpp \
    Authorization.cpp \
    User.cpp \
    DialogUsers.cpp \
    DialogRentMovie.cpp \
    DialogRentedMovies.cpp \
    DialogWatchedMovies.cpp

HEADERS += \
    MainWindow.h \
    Guest.h \
    Movie.h \
    DialogRegister.h \
    DialogLogin.h \
    DialogAddMovie.h \
    Admin.h \
    Authorization.h \
    User.h \
    DialogUsers.h \
    DialogRentMovie.h \
    DialogRentedMovies.h \
    DialogWatchedMovies.h

FORMS += \
        MainWindow.ui \
    DialogRegister.ui \
    DialogLogin.ui \
    DialogAddMovie.ui \
    DialogUsers.ui \
    DialogRentMovie.ui \
    DialogRentedMovies.ui \
    DialogWatchedMovies.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
