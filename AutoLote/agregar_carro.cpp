#include "agregar_carro.h"
#include "ui_agregar_carro.h"
#include "vehiculo.h"
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
    int estado,tipo;
    double precio_compra,kmrecorridos;
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_carro->text()).toStdString();
    placa=QString(ui->le_placa_carro->text()).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->GetPlaca()==placa){
            contador_repetido++;
        }
    }
    if(contador_repetido>0){
        repetido=true;
    }
    if(repetido){
        ui->le_placa_carro->setText("");
        Error error(0,"Esta placa ya esta registrada eliga una nueva...");
        error.setModal(true);
        error.exec();
    }else{
        if(ui->rb_tipo_turismo->isChecked()){
            tipo=1;
        }else if(ui->rb_tipo_pickup->isChecked()){
            tipo=2;
        }else if(ui->rb_tipo_camioneta->isChecked()){
            tipo=3;
        }

        if(ui->rb_estado_bueno_carro->isChecked()){
            estado=1;
        }else if(ui->rb_estado_reparado_carro->isChecked()){
            estado=2;
        }else if(ui->rb_estado_malo_carro->isChecked()){
            estado=3;
        }
        precio_compra=ui->dsb_carro_precio_compra->value();
        kmrecorridos=ui->dsb_carro_km_recorridos->value();
        Carro* carro=new Carro(1,marca,placa,estado,precio_compra,kmrecorridos,tipo);
        if(ui->dsb_carro_gastos_reparacion->isEnabled()){
            carro->SetGastos(ui->dsb_carro_gastos_reparacion->value());
        }
        vehiculos->push_back(carro);
        this->close();
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
