#include "agregar_moto.h"
#include "ui_agregar_moto.h"
#include "vehiculo.h"
#include "moto.h"
#include "error.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

Agregar_moto::Agregar_moto(QWidget *parent,vector<Vehiculo*>*vehiculos) :
    QDialog(parent),
    ui(new Ui::Agregar_moto)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
}

Agregar_moto::~Agregar_moto()
{
    delete ui;
}

void Agregar_moto::on_rb_carretilla_si_clicked()
{
    ui->dsb_moto_precio_compra_carretilla->setEnabled(true);
    ui->rb_estado_bueno_carretilla->setEnabled(true);
    ui->rb_estado_reparado_carretilla->setEnabled(true);
    ui->rb_estado_malo_carretilla->setEnabled(true);
}

void Agregar_moto::on_rb_carretilla_no_clicked()
{
    ui->dsb_moto_precio_compra_carretilla->setEnabled(false);
    ui->rb_estado_bueno_carretilla->setEnabled(false);
    ui->rb_estado_reparado_carretilla->setEnabled(false);
    ui->rb_estado_malo_carretilla->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla->setValue(0.00);
    ui->dsb_moto_precio_compra_carretilla->setValue(0.00);
    if(ui->rb_estado_bueno_carretilla->isChecked()){
        ui->rb_estado_bueno_carretilla->setChecked(false);
    }
    if(ui->rb_estado_malo_carretilla->isChecked()){
        ui->rb_estado_malo_carretilla->setChecked(false);
    }
    if(ui->rb_estado_reparado_carretilla->isChecked()){
        ui->rb_estado_reparado_carretilla->setChecked(false);
    }
}

void Agregar_moto::on_rb_estado_reparado_carretilla_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla->setEnabled(true);
}

void Agregar_moto::on_rb_estado_bueno_carretilla_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla->setValue(0.00);
}

void Agregar_moto::on_rb_estado_malo_carretilla_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla->setEnabled(false);
    ui->dsb_moto_gastos_reparacion_carretilla->setValue(0.00);
}

void Agregar_moto::on_rb_estado_reparado_moto_clicked()
{
    ui->dsb_moto_gastos_reparacion->setEnabled(true);
}

void Agregar_moto::on_rb_estado_bueno_moto_clicked()
{
    ui->dsb_moto_gastos_reparacion->setEnabled(false);
    ui->dsb_moto_gastos_reparacion->setValue(0.00);
}

void Agregar_moto::on_rb_estado_malo_moto_clicked()
{
    ui->dsb_moto_gastos_reparacion->setEnabled(false);
    ui->dsb_moto_gastos_reparacion->setValue(0.00);
}

void Agregar_moto::on_pb_agregar_moto_aceptar_clicked()
{
    string marca,placa;
    int estado,estado_sidecar;
    double precio_compra,kmrecorridos;
    bool sidecar;
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_moto->text()).toStdString();
    placa=QString(ui->le_placa_moto->text()).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->GetPlaca()==placa){
            contador_repetido++;
        }
    }
    if(contador_repetido>0){
        repetido=true;
    }
    if(repetido){
        ui->le_placa_moto->setText("");
        Error error(0,"Esta placa ya esta registrada eliga una nueva...");
        error.setModal(true);
        error.exec();
    }else{
        if(ui->rb_carretilla_si->isChecked()){
            sidecar=true;
            if(ui->rb_estado_bueno_carretilla->isChecked()){
                estado_sidecar=1;
            }else if(ui->rb_estado_reparado_carretilla->isChecked()){
                estado_sidecar=2;
            }else if(ui->rb_estado_malo_carretilla->isChecked()){
                estado_sidecar=3;
            }
        }else {
            sidecar=false;
        }

        if(ui->rb_estado_bueno_moto->isChecked()){
            estado=1;
        }else if(ui->rb_estado_reparado_moto->isChecked()){
            estado=2;
        }else if(ui->rb_estado_malo_moto->isChecked()){
            estado=3;
        }
        precio_compra=ui->dsb_moto_precio_compra->value();
        kmrecorridos=ui->dsb_moto_km_recorridos->value();
        Moto* moto=new Moto(2,marca,placa,estado,precio_compra,kmrecorridos,sidecar);
        moto->SetEstadoSidecar(estado_sidecar);
        if(ui->rb_carretilla_si->isChecked()){
            moto->SetPrecio_Compra_Sidecar(ui->dsb_moto_precio_compra_carretilla->value());
        }
        if(ui->dsb_moto_gastos_reparacion->isEnabled()){
            moto->SetGastos(ui->dsb_moto_gastos_reparacion->value());
        }
        if(ui->rb_estado_reparado_carretilla->isChecked()){
            moto->SetGastos_Sidecar(ui->dsb_moto_gastos_reparacion_carretilla->value());
        }
        vehiculos->push_back(moto);
        this->close();
    }
}
