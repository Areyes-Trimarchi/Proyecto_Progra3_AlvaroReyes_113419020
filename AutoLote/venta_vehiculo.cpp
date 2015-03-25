#include "venta_vehiculo.h"
#include "ui_venta_vehiculo.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "modificar_carro.h"
#include "modificar_moto.h"
#include "carro.h"
#include "moto.h"
#include "error.h"
#include "venta_carro.h"
#include "venta_moto.h"

using std::vector;

Venta_vehiculo::Venta_vehiculo(QWidget *parent,vector<Vehiculo*>*vehiculos,vector<Vehiculo*>*vendidos) :
    QDialog(parent),
    ui(new Ui::Venta_vehiculo)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    this->vendidos=vendidos;
    QStringList list;
    //llena una lista para meterla al combobox
    for(int i=0;i<this->vehiculos->size();i++){
        list.append(QString(this->vehiculos->at(i)->toString().c_str()));
    }
    //ingresa la lista al combobox
    ui->cb_venta_vehiculo->addItems(list);
}

Venta_vehiculo::~Venta_vehiculo()
{
    delete ui;
}
//evento del boton aceptar
void Venta_vehiculo::on_pb_venta_vehiculo_aceptar_clicked()
{
    int pos =ui->cb_venta_vehiculo->currentIndex();
    int posvector;
    string objeto=(ui->cb_venta_vehiculo->itemText(pos)).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->toString()==objeto){
            posvector=i;
            break;
        }
    }
    if(vehiculos->at(posvector)->GetCarrooMoto()==1){
        //si el objeto en el combobox es un carro se abre la ventana de venta de carros
        Venta_carro venta_car(0,vehiculos,vendidos,posvector);
        venta_car.setModal(true);
        venta_car.exec();
    }else{
        //si el objeto en el combobox es una moto se abre la ventana de venta de motos
        Venta_moto venta_moto(0,vehiculos,vendidos,posvector);
        venta_moto.setModal(true);
        venta_moto.exec();
    }
    this->close();
}
