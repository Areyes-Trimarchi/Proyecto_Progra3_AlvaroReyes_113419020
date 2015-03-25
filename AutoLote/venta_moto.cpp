#include "venta_moto.h"
#include "ui_venta_moto.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "error.h"
#include "moto.h"
#include "mensaje.h"
#include <string>

using std::vector;
using std::string;

Venta_moto::Venta_moto(QWidget *parent,vector<Vehiculo*>*vehiculos,vector<Vehiculo*>*vendidos,int posvector) :
    QDialog(parent),
    ui(new Ui::Venta_moto)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    this->vendidos=vendidos;
    this->posvector=posvector;
    //se actualizan los campos correspondientes
    ui->le_marca_moto_venta->setText(QString(this->vehiculos->at(posvector)->GetMarca().c_str()));
    ui->le_placa_moto_venta->setText(QString(this->vehiculos->at(posvector)->GetPlaca().c_str()));
    ui->dsb_moto_precio_venta->setValue(this->vehiculos->at(posvector)->GetPrecioVenta());
    switch(this->vehiculos->at(posvector)->GetEstado()){
        case 1:
        {

            ui->rb_estado_bueno_moto_venta->setChecked(true);
            ui->rb_estado_reparado_moto_venta->setChecked(false);
            ui->rb_estado_malo_moto_venta->setChecked(false);
            break;
        }
        case 2:
    {
        ui->rb_estado_bueno_moto_venta->setChecked(false);
        ui->rb_estado_reparado_moto_venta->setChecked(true);
        ui->rb_estado_malo_moto_venta->setChecked(false);
            break;
        }
        case 3:
        {
            ui->rb_estado_bueno_moto_venta->setChecked(false);
            ui->rb_estado_reparado_moto_venta->setChecked(false);
            ui->rb_estado_malo_moto_venta->setChecked(true);
            break;
        }
    }
    if(((Moto*)(vehiculos->at(posvector)))->GetSidecar()){
        ui->rb_carretilla_no_venta->setChecked(false);
        ui->rb_carretilla_si_venta->setChecked(true);
        switch(((Moto*)(this->vehiculos->at(posvector)))->GetEstadoSidecar()){
            case 1:
            {
                ui->rb_estado_bueno_carretilla_venta->setChecked(true);
                ui->rb_estado_reparado_carretilla_venta->setChecked(false);
                ui->rb_estado_malo_carretilla_venta->setChecked(false);
                break;
            }
            case 2:
            {
                ui->rb_estado_bueno_carretilla_venta->setChecked(false);
                ui->rb_estado_reparado_carretilla_venta->setChecked(true);
                ui->rb_estado_malo_carretilla_venta->setChecked(false);
                break;
            }
            case 3:
            {
                ui->rb_estado_bueno_carretilla_venta->setChecked(false);
                ui->rb_estado_reparado_carretilla_venta->setChecked(false);
                ui->rb_estado_malo_carretilla_venta->setChecked(true);
                break;
            }
        }
    }else{
        ui->rb_carretilla_no_venta->setChecked(true);
        ui->rb_carretilla_si_venta->setChecked(false);
    }
}

Venta_moto::~Venta_moto()
{
    delete ui;
}
//se intercambia el objeto del vector vehiculos al vector de vendidos
void Venta_moto::on_pb_comprar_venta_moto_clicked()
{
    vendidos->push_back(vehiculos->at(posvector));
    vehiculos->erase(vehiculos->begin()+(posvector));
    Mensaje mensaje(0,"La compra se ha realizado con exito!!!");
    mensaje.setModal(true);
    mensaje.exec();
    this->close();
}
