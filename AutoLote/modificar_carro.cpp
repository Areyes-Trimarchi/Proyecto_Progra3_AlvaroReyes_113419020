#include "modificar_carro.h"
#include "ui_modificar_carro.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "error.h"
#include "carro.h"
#include "mensaje.h"
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
    //Se carga la list para meterla al combobox
    for(int i=0;i<this->vehiculos->size();i++){
        if(this->vehiculos->at(i)->GetCarrooMoto()==1){
            list.append(QString(this->vehiculos->at(i)->toString().c_str()));
        }
    }
    //se carga el combobox
    ui->cb_modificar_carro->addItems(list);
}

Modificar_carro::~Modificar_carro()
{
    delete ui;
}
//Evalua los radiobotones y realiza las operaciones correspondientes igual que cuando se agregan carro
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
//Carga los datos a sus respectivos espacios al presionar y elegir un carro distinto
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
    //abilita todo los botones
    ui->dsb_carro_precio_compra_modificar->setValue(precio_compra);
    ui->dsb_carro_km_recorridos_modificar->setValue(kmrecorridos);
    ui->le_marca_carro_modificar->setEnabled(true);
    ui->le_placa_carro_modificar->setEnabled(true);
    ui->pb_modificar_carro_aceptar->setEnabled(true);
    ui->rb_estado_bueno_carro_modificar->setEnabled(true);
    ui->rb_estado_reparado_carro_modificar->setEnabled(true);
    ui->rb_estado_malo_carro_modificar->setEnabled(true);
    ui->rb_tipo_camioneta_modificar->setEnabled(true);
    ui->rb_tipo_turismo_modificar->setEnabled(true);
    ui->rb_tipo_pickup_modificar->setEnabled(true);
    ui->dsb_carro_km_recorridos_modificar->setEnabled(true);
    ui->dsb_carro_precio_compra_modificar->setEnabled(true);
}
//captura los datos y los reingresa al al espacio correspondiente en el vector
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
    int estado,tipo,error=0;
    double precio_compra,kmrecorridos,gastos=ui->dsb_carro_gastos_reparacion_modificar->value();
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_carro_modificar->text()).toStdString();
    if(marca==""||marca==" "){
        error++;
        ui->lb_error_marca_carro->setText("!");
    }else{
        ui->lb_error_marca_carro->setText("");
    }
    placa=QString(ui->le_placa_carro_modificar->text()).toStdString();
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->GetPlaca()==placa&&i!=posvector){
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
    if(ui->rb_tipo_turismo_modificar->isChecked()){
        tipo=1;
        ui->lb_error_tipo_carro->setText("");
    }else if(ui->rb_tipo_pickup_modificar->isChecked()){
        tipo=2;
        ui->lb_error_tipo_carro->setText("");
    }else if(ui->rb_tipo_camioneta_modificar->isChecked()){
        tipo=3;
        ui->lb_error_tipo_carro->setText("");
    }else{
        error++;
        ui->lb_error_tipo_carro->setText("!");
    }
    if(ui->rb_estado_bueno_carro_modificar->isChecked()){
        estado=1;
        ui->lb_error_estado_carro->setText("");
    }else if(ui->rb_estado_reparado_carro_modificar->isChecked()){
        estado=2;
        if(gastos!=0.00){
            ui->lb_error_gastos_carro->setText("");
        }else{
            error++;
            ui->lb_error_gastos_carro->setText("!");
        }
        ui->lb_error_estado_carro->setText("");
    }else if(ui->rb_estado_malo_carro_modificar->isChecked()){
        estado=3;
        ui->lb_error_estado_carro->setText("");
    }else{
        error++;
        ui->lb_error_estado_carro->setText("!");
    }
    precio_compra=ui->dsb_carro_precio_compra_modificar->value();
    if(precio_compra==0.00){
        error++;
        ui->lb_error_precio_compra_carro->setText("!");
    }else{
        ui->lb_error_precio_compra_carro->setText("");
    }
    kmrecorridos=ui->dsb_carro_km_recorridos_modificar->value();
    if(kmrecorridos==0.00&&estado!=1){
        error++;
        ui->lb_error_km_carro->setText("!");
    }else{
        ui->lb_error_km_carro->setText("");
    }
    if(error==0){
        //si no hay errores crea un objeto carro para ingresarlo al vector
        Carro* carro=new Carro(1,marca,placa,estado,precio_compra,kmrecorridos,tipo);
        if(ui->dsb_carro_gastos_reparacion_modificar->isEnabled()){
            carro->SetGastos(gastos);
        }
        vehiculos->at(posvector)=carro;
        //mensaje de exito
        Mensaje mensaje(0,"La modificacion del carro se ha realizado con exito!!!");
        mensaje.setModal(true);
        mensaje.exec();
        this->close();
    }else{
        //si hay errores abre la ventana de errores
        Error error(0,"Ocurrio un error, revise los datos que ingreso");
        error.setModal(true);
        error.exec();
    }
}
