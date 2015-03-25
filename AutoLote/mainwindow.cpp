#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventario.h"
#include "vehiculo.h"
#include "error.h"
#include "modificar.h"
#include "carro.h"
#include "moto.h"
#include <vector>
#include "agregar_vehiculo.h"
#include "venta_vehiculo.h"

using std::vector;

MainWindow::MainWindow(QWidget *parent,vector<Vehiculo*>*vehiculos,vector<Vehiculo*>*vendidos) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    this->vendidos=vendidos;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_agregar_vehiculo_clicked()
{
    Agregar_vehiculo agregar_v(0,vehiculos);
    agregar_v.setModal(true);
    agregar_v.exec();
}
void MainWindow::on_pb_modificar_vehiculo_clicked()
{
    if(vehiculos->size()>0){
        Modificar modificar(0,vehiculos);
        modificar.setModal(true);
        modificar.exec();
    }else{
        Error error(0,"No Hay Vehiculos");
        error.setModal(true);
        error.exec();
    }
}

void MainWindow::on_pb_venta_vehiculo_clicked()
{
    if(vehiculos->size()>0){
        Venta_vehiculo venta_vehiculo(0,vehiculos,vendidos);
        venta_vehiculo.setModal(true);
        venta_vehiculo.exec();
    }else{
        Error error(0,"No Hay Vehiculos");
        error.setModal(true);
        error.exec();
    }
}

void MainWindow::on_pb_inventario_clicked()
{
    if(vehiculos->size()>0||vendidos->size()>0){
        Inventario inventario(0,vehiculos,vendidos);
        inventario.setModal(true);
        inventario.exec();
    }
    else{
        Error error(0,"No Hay Vehiculos");
        error.setModal(true);
        error.exec();
    }
}
