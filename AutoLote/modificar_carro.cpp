#include "modificar_carro.h"
#include "ui_modificar_carro.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "error.h"
#include "carro.h"
#include <string>

using std::vector;
using std::string;

Modificar_carro::Modificar_carro(QWidget *parent,vector<Vehiculo*>*vehiculos) :
    QDialog(parent),
    ui(new Ui::Modificar_carro)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    QStringList list;
    for(int i=0;i<this->vehiculos->size();i++){
        if(this->vehiculos->at(i)->GetCarrooMoto()==1){
            list.append(QString(this->vehiculos->at(i)->toString().c_str()));
        }
    }
    ui->cb_modificar_carro->addItems(list);
}

Modificar_carro::~Modificar_carro()
{
    delete ui;
}

void Modificar_carro::on_rb_estado_reparado_carro_modificar_clicked()
{
    ui->dsb_carro_gastos_reparacion_modificar->setEnabled(true);
}

void Modificar_carro::on_rb_estado_bueno_carro_modificar_clicked()
{
    ui->dsb_carro_gastos_reparacion_modificar->setEnabled(false);
    ui->dsb_carro_gastos_reparacion_modificar->setValue(0.00);
}

void Modificar_carro::on_rb_estado_malo_carro_modificar_clicked()
{
    ui->dsb_carro_gastos_reparacion_modificar->setEnabled(false);
    ui->dsb_carro_gastos_reparacion_modificar->setValue(0.00);
}

void Modificar_carro::on_cb_modificar_carro_activated(int index)
{
    string marca,placa;
    int estado,tipo;
    double precio_compra,kmrecorridos;
    int pos =ui->cb_modificar_carro->currentIndex();
    int posvector;
    string objeto=(ui->cb_modificar_carro->itemText(pos)).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->toString()==objeto){
            posvector=i;
            break;
        }
    }
    marca=vehiculos->at(posvector)->GetMarca();
    placa=vehiculos->at(posvector)->GetPlaca();
    estado=vehiculos->at(posvector)->GetEstado();
    tipo=((Carro*)(vehiculos->at(posvector)))->GetTipo();
    precio_compra=vehiculos->at(posvector)->GetPrecioCompra();
    kmrecorridos=vehiculos->at(posvector)->GetKm();
    ui->le_marca_carro_modificar->setText(QString(marca.c_str()));
    ui->le_placa_carro_modificar->setText(QString(placa.c_str()));
    switch(tipo){
        case 1:
        {
            ui->rb_tipo_turismo_modificar->setChecked(true);
            break;
        }
        case 2:
        {
            ui->rb_tipo_pickup_modificar->setChecked(true);
            break;
        }
        case 3:
        {
            ui->rb_tipo_camioneta_modificar->setChecked(true);
            break;
        }
    }
    switch(estado){
        case 1:
        {
            ui->rb_estado_bueno_carro_modificar->setChecked(true);
            ui->dsb_carro_gastos_reparacion_modificar->setValue(0.00);
            ui->dsb_carro_gastos_reparacion_modificar->setEnabled(false);
            break;
        }
        case 2:
        {
            ui->rb_estado_reparado_carro_modificar->setChecked(true);
            ui->dsb_carro_gastos_reparacion_modificar->setValue((vehiculos->at(posvector))->GetGastos());
            ui->dsb_carro_gastos_reparacion_modificar->setEnabled(true);
            break;
        }
        case 3:
        {
            ui->rb_estado_malo_carro_modificar->setChecked(true);
            ui->dsb_carro_gastos_reparacion_modificar->setValue(0.00);
            ui->dsb_carro_gastos_reparacion_modificar->setEnabled(false);
            break;
        }
    }
    ui->dsb_carro_precio_compra_modificar->setValue(precio_compra);
    ui->dsb_carro_km_recorridos_modificar->setValue(kmrecorridos);
}

void Modificar_carro::on_pb_modificar_carro_aceptar_clicked()
{
    int pos =ui->cb_modificar_carro->currentIndex();
    int posvector;
    string objeto=(ui->cb_modificar_carro->itemText(pos)).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->toString()==objeto){
            posvector=i;
            break;
        }
    }
    string marca,placa;
    int estado,tipo;
    double precio_compra,kmrecorridos;
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_carro_modificar->text()).toStdString();
    placa=QString(ui->le_placa_carro_modificar->text()).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(i!=posvector){
            if(vehiculos->at(i)->GetPlaca()==placa){
                contador_repetido++;
            }
        }
    }
    if(contador_repetido>0){
        repetido=true;
    }
    if(repetido){
        ui->le_placa_carro_modificar->setText("");
        Error error(0,"Esta placa ya esta registrada eliga una nueva...");
        error.setModal(true);
        error.exec();
    }else{
        if(ui->rb_tipo_turismo_modificar->isChecked()){
            tipo=1;
        }else if(ui->rb_tipo_pickup_modificar->isChecked()){
            tipo=2;
        }else if(ui->rb_tipo_camioneta_modificar->isChecked()){
            tipo=3;
        }

        if(ui->rb_estado_bueno_carro_modificar->isChecked()){
            estado=1;
        }else if(ui->rb_estado_reparado_carro_modificar->isChecked()){
            estado=2;
        }else if(ui->rb_estado_malo_carro_modificar->isChecked()){
            estado=3;
        }
        precio_compra=ui->dsb_carro_precio_compra_modificar->value();
        kmrecorridos=ui->dsb_carro_km_recorridos_modificar->value();
        Carro* carro=new Carro(1,marca,placa,estado,precio_compra,kmrecorridos,tipo);
        if(ui->dsb_carro_gastos_reparacion_modificar->isEnabled()){
            carro->SetGastos(ui->dsb_carro_gastos_reparacion_modificar->value());
        }
        vehiculos->at(posvector)=carro;
        this->close();
    }
}
