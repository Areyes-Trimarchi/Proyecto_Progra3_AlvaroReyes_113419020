#include "modificar_moto.h"
#include "ui_modificar_moto.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "error.h"
#include "moto.h"
#include "mensaje.h"
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
    //se crea una lista y se llena con los vehiculos existentes
    for(int i=0;i<this->vehiculos->size();i++){
        if(this->vehiculos->at(i)->GetCarrooMoto()==2){
            list.append(QString(this->vehiculos->at(i)->toString().c_str()));
        }
    }
    //se ingresa la lista al combobox
    ui->cb_modificar_moto->addItems(list);
}

Modificar_moto::~Modificar_moto()
{
    delete ui;
}
//Evalua los radiobotones y hace las acciones correspondientes igual que en agregar moto
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
//actualiza los campos al apretar el combobox
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
        }else if(estado_sidecar==1){
            ui->rb_estado_bueno_carretilla_modificar->setChecked(true);
        }else{
            ui->rb_estado_malo_carretilla_modificar->setChecked(true);
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
    //Habilita todo lo que se debe de habilitar
    ui->le_marca_moto_modificar->setEnabled(true);
    ui->le_placa_moto_modificar->setEnabled(true);
    ui->dsb_moto_km_recorridos_modificar->setEnabled(true);
    ui->dsb_moto_precio_compra_modificar->setEnabled(true);
    ui->pb_agregar_moto_aceptar_modificar->setEnabled(true);
    ui->rb_carretilla_si_modificar->setEnabled(true);
    ui->rb_carretilla_no_modificar->setEnabled(true);
    ui->rb_estado_bueno_moto_modificar->setEnabled(true);
    ui->rb_estado_malo_moto_modificar->setEnabled(true);
    ui->rb_estado_reparado_moto_modificar->setEnabled(true);
}
//Modifica la moto y la ingresa al vector correspondiente
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
    int estado,estado_sidecar,error=0;
    double precio_compra,precio_compra_sidecar=ui->dsb_moto_precio_compra_carretilla_modificar->value(),kmrecorridos,gastos_sidecar=ui->dsb_moto_gastos_reparacion_carretilla_modificar->value(),gastos=ui->dsb_moto_gastos_reparacion_modificar->value();
    bool sidecar;
    bool repetido=false;
    int contador_repetido=0;
    marca=QString(ui->le_marca_moto_modificar->text()).toStdString();
    if(marca==""||marca==" "){
        error++;
        ui->lb_error_marca_moto->setText("!");
    }else{
        ui->lb_error_marca_moto->setText("");
    }
    placa=QString(ui->le_placa_moto_modificar->text()).toStdString();
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
        ui->lb_error_placa_moto->setText("!");
    }else{
        ui->lb_error_marca_moto->setText("");
    }
    if(ui->rb_carretilla_si_modificar->isChecked()){
        sidecar=true;
        if(precio_compra_sidecar==0.00){
            error++;
            ui->lb_error_precio_compra_sidecar->setText("!");
        }else{
            ui->lb_error_precio_compra_sidecar->setText("");
        }
        ui->lb_error_sidecar->setText("");
        if(ui->rb_estado_bueno_carretilla_modificar->isChecked()){
            estado_sidecar=1;
            ui->lb_error_estado_sidecar->setText("");
        }else if(ui->rb_estado_reparado_carretilla_modificar->isChecked()){
             estado_sidecar=2;
             if(gastos_sidecar==0.00){
                error++;
                ui->lb_error_gastos_sidecar->setText("!");
             }else{
                ui->lb_error_gastos_sidecar->setText("");
             }
             ui->lb_error_estado_sidecar->setText("");
        }else if(ui->rb_estado_malo_carretilla_modificar->isChecked()){
             estado_sidecar=3;
             ui->lb_error_estado_sidecar->setText("");
        }else{
            error++;
            ui->lb_error_estado_sidecar->setText("!");
        }
    }else if(ui->rb_carretilla_no_modificar->isChecked()){
        sidecar=false;
        ui->lb_error_sidecar->setText("");
    }else{
        error++;
        ui->lb_error_sidecar->setText("!");
    }
    if(ui->rb_estado_bueno_moto_modificar->isChecked()){
        estado=1;
        ui->lb_error_estado_moto->setText("");
    }else if(ui->rb_estado_reparado_moto_modificar->isChecked()){
        estado=2;
        if(gastos==0.00){
            error++;
            ui->lb_error_gastos_moto->setText("!");
        }else{
            ui->lb_error_gastos_moto->setText("");
        }
        ui->lb_error_estado_moto->setText("");
    }else if(ui->rb_estado_malo_moto_modificar->isChecked()){
        estado=3;
        ui->lb_error_estado_moto->setText("");
    }else{
        error++;
        ui->lb_error_estado_moto->setText("!");
    }
    precio_compra=ui->dsb_moto_precio_compra_modificar->value();
    if(precio_compra==0.00){
        error++;
        ui->lb_error_precio_compra_moto->setText("!");
    }else{
        ui->lb_error_precio_compra_moto->setText("");
    }
    kmrecorridos=ui->dsb_moto_km_recorridos_modificar->value();
    if(kmrecorridos==0.00&&estado!=1){
        error++;
        ui->lb_error_km_moto->setText("!");
    }else{
        ui->lb_error_km_moto->setText("");
    }
    if(error==0){
        //si no hay errores crea un objeto moto y lo ingresa al vector en su posicion correspondiente
        Moto* moto=new Moto(2,marca,placa,estado,precio_compra,kmrecorridos,sidecar);
        moto->SetEstadoSidecar(estado_sidecar);
        if(ui->rb_carretilla_si_modificar->isChecked()){
            moto->SetPrecio_Compra_Sidecar(precio_compra_sidecar);
        }
        if(ui->dsb_moto_gastos_reparacion_modificar->isEnabled()){
            moto->SetGastos(gastos);
        }
        if(ui->rb_estado_reparado_carretilla_modificar->isChecked()){
            moto->SetGastos_Sidecar(gastos_sidecar);
        }
        vehiculos->at(posvector)=moto;
        //Mensaje de exito
        Mensaje mensaje(0,"La Modificacion de la moto se ha realizado con exito!!!");
        mensaje.setModal(true);
        mensaje.exec();
        this->close();
    }else{
        //Si hay errores abre la ventana de errores
        Error error(0,"Ocurrio un errror revise los datos que esta ingresando...");
        error.setModal(true);
        error.exec();
    }
}
