#-------------------------------------------------
#
# Project created by QtCreator 2015-03-18T19:48:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AutoLote
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    vehiculo.cpp \
    carro.cpp \
    moto.cpp \
    agregar_vehiculo.cpp \
    agregar_carro.cpp \
    agregar_moto.cpp \
    inventario.cpp \
    modificar.cpp \
    modificar_carro.cpp \
    error.cpp \
    modificar_moto.cpp \
    venta_vehiculo.cpp \
    venta_carro.cpp \
    venta_moto.cpp \
    mensaje.cpp

HEADERS  += mainwindow.h \
    vehiculo.h \
    carro.h \
    moto.h \
    agregar_vehiculo.h \
    agregar_carro.h \
    agregar_moto.h \
    inventario.h \
    modificar.h \
    modificar_carro.h \
    error.h \
    modificar_moto.h \
    venta_vehiculo.h \
    venta_carro.h \
    venta_moto.h \
    mensaje.h

FORMS    += mainwindow.ui \
    agregar_vehiculo.ui \
    agregar_carro.ui \
    agregar_moto.ui \
    inventario.ui \
    modificar.ui \
    modificar_carro.ui \
    error.ui \
    modificar_moto.ui \
    venta_vehiculo.ui \
    venta_carro.ui \
    venta_moto.ui \
    mensaje.ui
