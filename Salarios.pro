QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD
=======
    acerca.cpp \
>>>>>>> c540aad (version 1.0)
    controlador.cpp \
    main.cpp \
    obrero.cpp \
    salarios.cpp

HEADERS += \
<<<<<<< HEAD
=======
    acerca.h \
>>>>>>> c540aad (version 1.0)
    controlador.h \
    obrero.h \
    salarios.h

FORMS += \
<<<<<<< HEAD
=======
    acerca.ui \
>>>>>>> c540aad (version 1.0)
    salarios.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
<<<<<<< HEAD
=======

RESOURCES += \
    recursos.qrc
>>>>>>> c540aad (version 1.0)
