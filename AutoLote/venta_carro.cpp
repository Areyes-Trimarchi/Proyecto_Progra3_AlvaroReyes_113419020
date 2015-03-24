#include "venta_carro.h"
#include "ui_venta_carro.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "error.h"
#include "carro.h"
#include "mensaje.h"
#include <string>

using std::vector;
using std::string;

Venta_carro::Venta_carro(QWidget *parent,vector<Vehiculo*>*vehiculos,vector<Vehiculo*>*vendidos,int posvector) :
    QDialog(parent),
    ui(new Ui::Venta_carro)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    this->vendidos=vendidos;
    this->posvector=posvector;
    ui->le_marca_carro_venta->setText(QString(this->vehiculos->at(posvector)->GetMarca().c_str()));
    ui->le_placa_carro_venta->setText(QString(this->vehiculos->at(posvector)->GetPlaca().c_str()));
    ui->dsb_carro_precio_venta->setValue(this->vehiculos->at(posvector)->GetPrecioVenta());
    switch(this->vehiculos->at(posvector)->GetEstado()){
        case 1:
        {
            ui->rb_estado_bueno_carro_venta->setChecked(true);
            ui->rb_estado_reparado_carro_venta->setChecked(false);
            ui->rb_estado_malo_carro_venta->setChecked(false);
            break;
        }
        case 2:
        {
            ui->rb_estado_bueno_carro_venta->setChecked(false);
            ui->rb_estado_reparado_carro_venta->setChecked(true);
            ui->rb_estado_malo_carro_venta->setChecked(false);
            break;
        }
        case 3:
        {
            ui->rb_estado_bueno_carro_venta->setChecked(false);
            ui->rb_estado_reparado_carro_venta->setChecked(false);
            ui->rb_estado_malo_carro_venta->setChecked(true);
            break;
        }
    }
    switch(((Carro*)(this->vehiculos->at(posvector)))->GetTipo()){
        case 1:
        {
            ui->rb_tipo_turismo_venta->setChecked(true);
            ui->rb_tipo_pickup_venta->setChecked(false);
            ui->rb_tipo_camioneta_venta->setChecked(false);
            break;
        }
        case 2:
        {
            ui->rb_tipo_turismo_venta->setChecked(false);
            ui->rb_tipo_pickup_venta->setChecked(true);
            ui->rb_tipo_camioneta_venta->setChecked(false);
            break;
        }
        case 3:
        {
            ui->rb_tipo_turismo_venta->setChecked(false);
            ui->rb_tipo_pickup_venta->setChecked(false);
            ui->rb_tipo_camioneta_venta->setChecked(true);
            break;
        }
    }
    ui->dsb_carro_precio_venta->setValue(this->vehiculos->at(posvector)->GetPrecioVenta());
}

Venta_carro::~Venta_carro()
{
    delete ui;
}

void Venta_carro::on_pb_comprar_venta_carro_clicked()
{
    vendidos->push_back(vehiculos->at(posvector));
    vehiculos->erase(vehiculos->begin()+(posvector));
    Mensaje mensaje(0,"La compra se ha realizado con exito!!!");
    mensaje.setModal(true);
    mensaje.exec();
    this->close();
}
