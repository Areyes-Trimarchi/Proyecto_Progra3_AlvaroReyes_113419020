#include "modificar_moto.h"
#include "ui_modificar_moto.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "error.h"
#include "moto.h"
#include <string>

using std::vector;
using std::string;

Modificar_moto::Modificar_moto(QWidget *parent,vector<Vehiculo*>*vehiculos) :
    QDialog(parent),
    ui(new Ui::Modificar_moto)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    QStringList list;
    for(int i=0;i<this->vehiculos->size();i++){
        if(this->vehiculos->at(i)->GetCarrooMoto()==2){
            list.append(QString(this->vehiculos->at(i)->toString().c_str()));
        }
    }
    ui->cb_modificar_moto->addItems(list);
}

Modificar_moto::~Modificar_moto()
{
    delete ui;
}

void Modificar_moto::on_rb_carretilla_si_modificar_clicked()
{
    ui->dsb_moto_precio_compra_carretilla_modificar->setEnabled(true);
    ui->rb_estado_bueno_carretilla_modificar->setEnabled(true);
    ui->rb_estado_reparado_carretilla_modificar->setEnabled(true);
    ui->rb_estado_malo_carretilla_modificar->setEnabled(true);
}

void Modificar_moto::on_rb_carretilla_no_modificar_clicked()
{
    ui->dsb_moto_precio_compra_carretilla_modificar->setEnabled(false);
    ui->rb_estado_bueno_carretilla_modificar->setEnabled(false);
    ui->rb_estado_reparado_carretilla_modificar->setEnabled(false);
    ui->rb_estado_malo_carretilla_modificar->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setValue(0.00);
    ui->dsb_moto_precio_compra_carretilla_modificar->setValue(0.00);
    if(ui->rb_estado_bueno_carretilla_modificar->isChecked()){
        ui->rb_estado_bueno_carretilla_modificar->setChecked(false);
    }
    if(ui->rb_estado_malo_carretilla_modificar->isChecked()){
        ui->rb_estado_malo_carretilla_modificar->setChecked(false);
    }
    if(ui->rb_estado_reparado_carretilla_modificar->isChecked()){
        ui->rb_estado_reparado_carretilla_modificar->setChecked(false);
    }
}

void Modificar_moto::on_rb_estado_reparado_carretilla_modificar_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setEnabled(true);
}

void Modificar_moto::on_rb_estado_bueno_carretilla_modificar_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setValue(0.00);
}

void Modificar_moto::on_rb_estado_malo_carretilla_modificar_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla_modificar->setValue(0.00);
}

void Modificar_moto::on_rb_estado_reparado_moto_modificar_clicked()
{
    ui->dsb_moto_gastos_reparacion_modificar->setEnabled(true);
}

void Modificar_moto::on_rb_estado_bueno_moto_modificar_clicked()
{
    ui->dsb_moto_gastos_reparacion_modificar->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_modificar->setValue(0.00);
}

void Modificar_moto::on_rb_estado_malo_moto_modificar_clicked()
{
    ui->dsb_moto_gastos_reparacion_modificar->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_modificar->setValue(0.00);
}

void Modificar_moto::on_cb_modificar_moto_activated(int index)
{
    string marca,placa;
    int estado,estado_sidecar;
    double precio_compra,kmrecorridos,precio_compra_sidecar,gastos_sidecar;
    bool sidecar;
    int pos =ui->cb_modificar_moto->currentIndex();
    int posvector;
    string objeto=(ui->cb_modificar_moto->itemText(pos)).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->toString()==objeto){
            posvector=i;
            break;
        }
    }
    marca=vehiculos->at(posvector)->GetMarca();
    placa=vehiculos->at(posvector)->GetPlaca();
    estado=vehiculos->at(posvector)->GetEstado();
    sidecar=((Moto*)(vehiculos->at(posvector)))->GetSidecar();
    if(sidecar){
        estado_sidecar=((Moto*)(vehiculos->at(posvector)))->GetEstadoSidecar();
        precio_compra_sidecar=((Moto*)(vehiculos->at(posvector)))->GetPrecio_Compra_Sidecar();
        ui->rb_carretilla_si_modificar->setChecked(true);
        ui->dsb_moto_precio_compra_carretilla_modificar->setValue(precio_compra_sidecar);
        ui->dsb_moto_precio_compra_carretilla_modificar->setEnabled(true);
        ui->rb_estado_reparado_carretilla_modificar->setEnabled(true);
        ui->rb_estado_bueno_carretilla_modificar->setEnabled(true);
        ui->rb_estado_malo_carretilla_modificar->setEnabled(true);
        if(estado_sidecar==2){
            gastos_sidecar=((Moto*)(vehiculos->at(posvector)))->GetGastos_Sidecar();
            ui->rb_estado_reparado_carretilla_modificar->setChecked(true);
            ui->dsb_moto_gastos_reparacion_carretilla_modificar->setValue(gastos_sidecar);
            ui->dsb_moto_gastos_reparacion_carretilla_modificar->setEnabled(true);
        }
    }else{
        ui->rb_carretilla_no_modificar->setChecked(true);
    }
    precio_compra=vehiculos->at(posvector)->GetPrecioCompra();
    kmrecorridos=vehiculos->at(posvector)->GetKm();
    ui->le_marca_moto_modificar->setText(QString(marca.c_str()));
    ui->le_placa_moto_modificar->setText(QString(placa.c_str()));
    switch(estado){
        case 1:
        {
            ui->rb_estado_bueno_moto_modificar->setChecked(true);
            ui->dsb_moto_gastos_reparacion_modificar->setValue(0.00);
            ui->dsb_moto_gastos_reparacion_modificar->setEnabled(false);
            break;
        }
        case 2:
        {
            ui->rb_estado_reparado_moto_modificar->setChecked(true);
            ui->dsb_moto_gastos_reparacion_modificar->setValue((vehiculos->at(posvector))->GetGastos());
            ui->dsb_moto_gastos_reparacion_modificar->setEnabled(true);
            break;
        }
        case 3:
        {
            ui->rb_estado_malo_moto_modificar->setChecked(true);
            ui->dsb_moto_gastos_reparacion_modificar->setValue(0.00);
            ui->dsb_moto_gastos_reparacion_modificar->setEnabled(false);
            break;
        }
    }
    ui->dsb_moto_precio_compra_modificar->setValue(precio_compra);
    ui->dsb_moto_km_recorridos_modificar->setValue(kmrecorridos);
}

void Modificar_moto::on_pb_agregar_moto_aceptar_modificar_clicked()
{
    int pos =ui->cb_modificar_moto->currentIndex();
    int posvector;
    string objeto=(ui->cb_modificar_moto->itemText(pos)).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->toString()==objeto){
            posvector=i;
            break;
        }
    }
    string marca,placa;
    int estado,estado_sidecar;
    double precio_compra,kmrecorridos;
    bool sidecar;
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_moto_modificar->text()).toStdString();
    placa=QString(ui->le_placa_moto_modificar->text()).toStdString();
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
        ui->le_placa_moto_modificar->setText("");
        Error error(0,"Esta placa ya esta registrada eliga una nueva...");
        error.setModal(true);
        error.exec();
    }else{
        if(ui->rb_carretilla_si_modificar->isChecked()){
            sidecar=true;
            if(ui->rb_estado_bueno_carretilla_modificar->isChecked()){
                estado_sidecar=1;
            }else if(ui->rb_estado_reparado_carretilla_modificar->isChecked()){
                estado_sidecar=2;
            }else if(ui->rb_estado_malo_carretilla_modificar->isChecked()){
                estado_sidecar=3;
            }
        }else {
            sidecar=false;
        }

        if(ui->rb_estado_bueno_moto_modificar->isChecked()){
            estado=1;
        }else if(ui->rb_estado_reparado_moto_modificar->isChecked()){
            estado=2;
        }else if(ui->rb_estado_malo_moto_modificar->isChecked()){
            estado=3;
        }
        precio_compra=ui->dsb_moto_precio_compra_modificar->value();
        kmrecorridos=ui->dsb_moto_km_recorridos_modificar->value();
        Moto* moto=new Moto(2,marca,placa,estado,precio_compra,kmrecorridos,sidecar);
        moto->SetEstadoSidecar(estado_sidecar);
        if(ui->rb_carretilla_si_modificar->isChecked()){
            moto->SetPrecio_Compra_Sidecar(ui->dsb_moto_precio_compra_carretilla_modificar->value());
        }
        if(ui->dsb_moto_gastos_reparacion_modificar->isEnabled()){
            moto->SetGastos(ui->dsb_moto_gastos_reparacion_modificar->value());
        }
        if(ui->rb_estado_reparado_carretilla_modificar->isChecked()){
            moto->SetGastos_Sidecar(ui->dsb_moto_gastos_reparacion_carretilla_modificar->value());
        }
        vehiculos->at(posvector)=moto;
        this->close();
    }
}
