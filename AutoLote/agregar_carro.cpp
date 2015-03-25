#include "agregar_carro.h"
#include "ui_agregar_carro.h"
#include "vehiculo.h"
#include "mensaje.h"
#include "carro.h"
#include "error.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

Agregar_carro::Agregar_carro(QWidget *parent,vector<Vehiculo*>*vehiculos) :
    QDialog(parent),
    ui(new Ui::Agregar_carro)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
}

Agregar_carro::~Agregar_carro()
{
    delete ui;
}

void Agregar_carro::on_pb_agregar_carro_aceptar_clicked()
{
    string marca,placa;
    int estado,tipo,error=0;
    double precio_compra,kmrecorridos,gastos=ui->dsb_carro_gastos_reparacion->value();
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_carro->text()).toStdString();
    if(marca==""||marca==" "){
        error++;
        ui->lb_error_marca_carro->setText("!");
    }else{
        ui->lb_error_marca_carro->setText("");
    }
    placa=QString(ui->le_placa_carro->text()).toStdString();
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
        ui->lb_error_placa_carro->setText("!");
    }else{
        ui->lb_error_placa_carro->setText("");
    }
    if(ui->rb_tipo_turismo->isChecked()){
        tipo=1;
        ui->lb_error_tipo_carro->setText("");
    }else if(ui->rb_tipo_pickup->isChecked()){
        tipo=2;
        ui->lb_error_tipo_carro->setText("");
    }else if(ui->rb_tipo_camioneta->isChecked()){
        tipo=3;
        ui->lb_error_tipo_carro->setText("");
    }else{
        error++;
        ui->lb_error_tipo_carro->setText("!");
    }
    if(ui->rb_estado_bueno_carro->isChecked()){
        estado=1;
        ui->lb_error_estado_carro->setText("");
    }else if(ui->rb_estado_reparado_carro->isChecked()){
        estado=2;
        if(gastos!=0.00){
            ui->lb_error_gastos_carro->setText("");
        }else{
            error++;
            ui->lb_error_gastos_carro->setText("!");
        }
        ui->lb_error_estado_carro->setText("");
    }else if(ui->rb_estado_malo_carro->isChecked()){
        estado=3;
        ui->lb_error_estado_carro->setText("");
    }else{
        error++;
        ui->lb_error_estado_carro->setText("!");
    }
    precio_compra=ui->dsb_carro_precio_compra->value();
    if(precio_compra==0.00){
        error++;
        ui->lb_error_precio_compra_carro->setText("!");
    }else{
        ui->lb_error_precio_compra_carro->setText("");
    }
    kmrecorridos=ui->dsb_carro_km_recorridos->value();
    if(kmrecorridos==0.00&&estado!=1){
        error++;
        ui->lb_error_km_carro->setText("!");
    }else{
        ui->lb_error_km_carro->setText("");
    }
    if(error==0){
        Carro* carro=new Carro(1,marca,placa,estado,precio_compra,kmrecorridos,tipo);
        if(ui->dsb_carro_gastos_reparacion->isEnabled()){
            carro->SetGastos(gastos);
        }
        vehiculos->push_back(carro);
        Mensaje mensaje(0,"El carro fue agregado con exito con exito!!!");
        mensaje.setModal(true);
        mensaje.exec();
        this->close();
    }else{
        Error error(0,"Ocurrio un error, revise los datos que ingreso");
        error.setModal(true);
        error.exec();
    }
}

void Agregar_carro::on_rb_estado_reparado_carro_clicked()
{
    ui->dsb_carro_gastos_reparacion->setEnabled(true);
}

void Agregar_carro::on_rb_estado_bueno_carro_clicked()
{
    ui->dsb_carro_gastos_reparacion->setEnabled(false);
    ui->dsb_carro_gastos_reparacion->setValue(0.00);
}

void Agregar_carro::on_rb_estado_malo_carro_clicked()
{
    ui->dsb_carro_gastos_reparacion->setEnabled(false);
    ui->dsb_carro_gastos_reparacion->setValue(0.00);
}
