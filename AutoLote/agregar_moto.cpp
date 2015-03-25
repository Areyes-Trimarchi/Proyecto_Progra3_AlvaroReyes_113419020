#include "agregar_moto.h"
#include "ui_agregar_moto.h"
#include "vehiculo.h"
#include "moto.h"
#include "error.h"
#include "mensaje.h"
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
//Habilitar Opciones de la carretilla
void Agregar_moto::on_rb_carretilla_si_clicked()
{
    ui->dsb_moto_precio_compra_carretilla->setEnabled(true);
    ui->rb_estado_bueno_carretilla->setEnabled(true);
    ui->rb_estado_reparado_carretilla->setEnabled(true);
    ui->rb_estado_malo_carretilla->setEnabled(true);
}
//deshabilitar Opciones de la carretilla
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
//habilitar el double spin de gastos de side car(carretilla)
void Agregar_moto::on_rb_estado_reparado_carretilla_clicked()
{
    ui->dsb_moto_gastos_reparacion_carretilla->setEnabled(true);
}
//deshabilitar el dbs de gastos de side car(carretilla)
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
//habilitar el dbs de gastos
void Agregar_moto::on_rb_estado_reparado_moto_clicked()
{
    ui->dsb_moto_gastos_reparacion->setEnabled(true);
}
//deshabilitar el dbs de gastos
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
//Evento cuando se da click al boton aceptar para agregar una moto
void Agregar_moto::on_pb_agregar_moto_aceptar_clicked()
{
    string marca,placa;
    int estado,estado_sidecar,error=0;
    double precio_compra,precio_compra_sidecar=ui->dsb_moto_precio_compra_carretilla->value(),kmrecorridos,gastos_sidecar=ui->dsb_moto_gastos_reparacion_carretilla->value(),gastos=ui->dsb_moto_gastos_reparacion->value();
    bool sidecar;
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_moto->text()).toStdString();
    if(marca==""||marca==" "){
        error++;
        ui->lb_error_marca_moto->setText("!");
    }else{
        ui->lb_error_marca_moto->setText("");
    }
    placa=QString(ui->le_placa_moto->text()).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->GetPlaca()==placa){
            contador_repetido++;
        }
    }
    if(contador_repetido>0){
        repetido=true;
    }
    if(repetido||placa==""||placa==" "){
        error++;
        ui->lb_error_placa_moto->setText("!");
    }else{
        ui->lb_error_marca_moto->setText("");
    }
    if(ui->rb_carretilla_si->isChecked()){
        sidecar=true;
        if(precio_compra_sidecar==0.00){
            error++;
            ui->lb_error_precio_compra_sidecar->setText("!");
        }else{
            ui->lb_error_precio_compra_sidecar->setText("");
        }
        ui->lb_error_sidecar->setText("");
        if(ui->rb_estado_bueno_carretilla->isChecked()){
            estado_sidecar=1;
            ui->lb_error_estado_sidecar->setText("");
        }else if(ui->rb_estado_reparado_carretilla->isChecked()){
             estado_sidecar=2;
             if(gastos_sidecar==0.00){
                error++;
                ui->lb_error_gastos_sidecar->setText("!");
             }else{
                ui->lb_error_gastos_sidecar->setText("");
             }
             ui->lb_error_estado_sidecar->setText("");
        }else if(ui->rb_estado_malo_carretilla->isChecked()){
             estado_sidecar=3;
             ui->lb_error_estado_sidecar->setText("");
        }else{
            error++;
            ui->lb_error_estado_sidecar->setText("!");
        }
    }else if(ui->rb_carretilla_no->isChecked()){
        sidecar=false;
        ui->lb_error_sidecar->setText("");
    }else{
        error++;
        ui->lb_error_sidecar->setText("!");
    }
    if(ui->rb_estado_bueno_moto->isChecked()){
        estado=1;
        ui->lb_error_estado_moto->setText("");
    }else if(ui->rb_estado_reparado_moto->isChecked()){
        estado=2;
        if(gastos==0.00){
            error++;
            ui->lb_error_gastos_moto->setText("!");
        }else{
            ui->lb_error_gastos_moto->setText("");
        }
        ui->lb_error_estado_moto->setText("");
    }else if(ui->rb_estado_malo_moto->isChecked()){
        estado=3;
        ui->lb_error_estado_moto->setText("");
    }else{
        error++;
        ui->lb_error_estado_moto->setText("!");
    }
    precio_compra=ui->dsb_moto_precio_compra->value();
    if(precio_compra==0.00){
        error++;
        ui->lb_error_precio_compra_moto->setText("!");
    }else{
        ui->lb_error_precio_compra_moto->setText("");
    }
    kmrecorridos=ui->dsb_moto_km_recorridos->value();
    if(kmrecorridos==0.00&&estado!=1){
        error++;
        ui->lb_error_km_moto->setText("!");
    }else{
        ui->lb_error_km_moto->setText("");
    }
    if(error==0){
        //Crear objeto moto
        Moto* moto=new Moto(2,marca,placa,estado,precio_compra,kmrecorridos,sidecar);
        moto->SetEstadoSidecar(estado_sidecar);
        if(ui->rb_carretilla_si->isChecked()){
            moto->SetPrecio_Compra_Sidecar(precio_compra_sidecar);
        }
        if(ui->dsb_moto_gastos_reparacion->isEnabled()){
            moto->SetGastos(gastos);
        }
        if(ui->rb_estado_reparado_carretilla->isChecked()){
            moto->SetGastos_Sidecar(gastos_sidecar);
        }
        //Meter el objeto dentro del vector de vehiculos si no hay errores
        vehiculos->push_back(moto);
        //Mensaje de exito
        Mensaje mensaje(0,"La Moto ha sido agregada con exito!!!");
        mensaje.setModal(true);
        mensaje.exec();
        this->close();
    }else{
        //Apertura Mensaje de error si existen errores
        Error error(0,"Ocurrio un errror revise los datos que esta ingresando...");
        error.setModal(true);
        error.exec();
    }
}
