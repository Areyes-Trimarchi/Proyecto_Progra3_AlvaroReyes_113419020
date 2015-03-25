#include "inventario.h"
#include "ui_inventario.h"
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"
//
#include <iostream>
using std::cout;
using std::endl;
//

using std::vector;

Inventario::Inventario(QWidget *parent,vector<Vehiculo*>*vehiculos,vector<Vehiculo*>*vendidos) :
    QDialog(parent),
    ui(new Ui::Inventario)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    this->vendidos=vendidos;
    ui->tw_vehiculo_vendidos->setRowCount(this->vendidos->size());
    ui->tw_vehiculo_inventario->setRowCount(this->vehiculos->size());
    //Llenar tabla de vehiculos en Inventario
    for(int i=0;i<this->vehiculos->size();i++){
        if(this->vehiculos->at(i)->GetCarrooMoto()==1){
            ui->tw_vehiculo_inventario->setItem(i,0,new QTableWidgetItem(QString("Carro")));
            ui->tw_vehiculo_inventario->setItem(i,1,new QTableWidgetItem(QString(this->vehiculos->at(i)->GetMarca().c_str())));
            ui->tw_vehiculo_inventario->setItem(i,2,new QTableWidgetItem(QString(this->vehiculos->at(i)->GetPlaca().c_str())));
            switch(this->vehiculos->at(i)->GetEstado()){
                case 1:
                {
                    ui->tw_vehiculo_inventario->setItem(i,3,new QTableWidgetItem(QString("Bueno")));
                    break;
                }
                case 2:
                {
                    ui->tw_vehiculo_inventario->setItem(i,3,new QTableWidgetItem(QString("Reparado")));
                    break;
                }
                case 3:
                {
                    ui->tw_vehiculo_inventario->setItem(i,3,new QTableWidgetItem(QString("Malo")));
                    break;
                }
            }
            if(this->vehiculos->at(i)->GetEstado()==2){
                ui->tw_vehiculo_inventario->setItem(i,4,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetGastos()).append(" .Lps")));
            }else{
               ui->tw_vehiculo_inventario->setItem(i,4,new QTableWidgetItem(QString("N/A")));
            }
            ui->tw_vehiculo_inventario->setItem(i,5,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetKm()).append(" km cds")));
            switch(((Carro*)(this->vehiculos->at(i)))->GetTipo()){
                case 1:
                {
                    ui->tw_vehiculo_inventario->setItem(i,6,new QTableWidgetItem(QString("Turismo")));
                    break;
                }
                case 2:
                {
                    ui->tw_vehiculo_inventario->setItem(i,6,new QTableWidgetItem(QString("Pickup")));
                    break;
                }
                case 3:
                {
                    ui->tw_vehiculo_inventario->setItem(i,6,new QTableWidgetItem(QString("Camioneta")));
                    break;
                }
            }
            ui->tw_vehiculo_inventario->setItem(i,7,new QTableWidgetItem(QString("N/A")));
            ui->tw_vehiculo_inventario->setItem(i,8,new QTableWidgetItem(QString("N/A")));
            ui->tw_vehiculo_inventario->setItem(i,9,new QTableWidgetItem(QString("N/A")));
            ui->tw_vehiculo_inventario->setItem(i,10,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetPrecioCompra()).append(" .Lps")));
            ui->tw_vehiculo_inventario->setItem(i,11,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetPrecioVenta()).append(" .Lps")));
        }else{
            ui->tw_vehiculo_inventario->setItem(i,0,new QTableWidgetItem(QString("Moto")));
            ui->tw_vehiculo_inventario->setItem(i,1,new QTableWidgetItem(QString(this->vehiculos->at(i)->GetMarca().c_str())));
            ui->tw_vehiculo_inventario->setItem(i,2,new QTableWidgetItem(QString(this->vehiculos->at(i)->GetPlaca().c_str())));
            switch(this->vehiculos->at(i)->GetEstado()){
                case 1:
                {
                    ui->tw_vehiculo_inventario->setItem(i,3,new QTableWidgetItem(QString("Bueno")));
                    break;
                }
                case 2:
                {
                    ui->tw_vehiculo_inventario->setItem(i,3,new QTableWidgetItem(QString("Reparado")));
                    break;
                }
                case 3:
                {
                    ui->tw_vehiculo_inventario->setItem(i,3,new QTableWidgetItem(QString("Malo")));
                    break;
                }
            }
            if(this->vehiculos->at(i)->GetEstado()==2){
                ui->tw_vehiculo_inventario->setItem(i,4,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetGastos()).append(" .Lps")));
            }else{
               ui->tw_vehiculo_inventario->setItem(i,4,new QTableWidgetItem(QString("N/A")));
            }
            ui->tw_vehiculo_inventario->setItem(i,5,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetKm()).append(" km cds")));
            ui->tw_vehiculo_inventario->setItem(i,6,new QTableWidgetItem(QString("N/A")));
            if(((Moto*)(this->vehiculos->at(i)))->GetSidecar()){
                ui->tw_vehiculo_inventario->setItem(i,7,new QTableWidgetItem(QString("Si Tiene")));
                switch(((Moto*)(this->vehiculos->at(i)))->GetEstadoSidecar()){
                    case 1:
                    {
                        ui->tw_vehiculo_inventario->setItem(i,8,new QTableWidgetItem(QString("Bueno")));
                        break;
                    }
                    case 2:
                    {
                        ui->tw_vehiculo_inventario->setItem(i,8,new QTableWidgetItem(QString("Reparado")));
                        break;
                    }
                    case 3:
                    {
                        ui->tw_vehiculo_inventario->setItem(i,8,new QTableWidgetItem(QString("Malo")));
                        break;
                    }
                }
            }else{
                ui->tw_vehiculo_inventario->setItem(i,7,new QTableWidgetItem(QString("No Tiene")));
            }
            if(((Moto*)(this->vehiculos->at(i)))->GetEstadoSidecar()==2){
                ui->tw_vehiculo_inventario->setItem(i,9,new QTableWidgetItem(QString::number(((Moto*)(this->vehiculos->at(i)))->GetGastos_Sidecar()).append(" .Lps")));
            }else{
                ui->tw_vehiculo_inventario->setItem(i,9,new QTableWidgetItem(QString("N/A")));
            }
            ui->tw_vehiculo_inventario->setItem(i,10,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetPrecioCompra()).append(" .Lps")));
            ui->tw_vehiculo_inventario->setItem(i,11,new QTableWidgetItem(QString::number(this->vehiculos->at(i)->GetPrecioVenta()).append(" .Lps")));
        }
    }
    //Llenar tabla de vehiculos vendidos
    for(int i=0;i<this->vendidos->size();i++){
        if(this->vendidos->at(i)->GetCarrooMoto()==1){
            ui->tw_vehiculo_vendidos->setItem(i,0,new QTableWidgetItem(QString("Carro")));
            ui->tw_vehiculo_vendidos->setItem(i,1,new QTableWidgetItem(QString(this->vendidos->at(i)->GetMarca().c_str())));
            ui->tw_vehiculo_vendidos->setItem(i,2,new QTableWidgetItem(QString(this->vendidos->at(i)->GetPlaca().c_str())));
            switch(this->vendidos->at(i)->GetEstado()){
                case 1:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,3,new QTableWidgetItem(QString("Bueno")));
                    break;
                }
                case 2:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,3,new QTableWidgetItem(QString("Reparado")));
                    break;
                }
                case 3:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,3,new QTableWidgetItem(QString("Malo")));
                    break;
                }
            }
            if(this->vendidos->at(i)->GetEstado()==2){
                ui->tw_vehiculo_vendidos->setItem(i,4,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetGastos()).append(" .Lps")));
            }else{
               ui->tw_vehiculo_vendidos->setItem(i,4,new QTableWidgetItem(QString("N/A")));
            }
            ui->tw_vehiculo_vendidos->setItem(i,5,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetKm()).append(" km cds")));
            switch(((Carro*)(this->vendidos->at(i)))->GetTipo()){
                case 1:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,6,new QTableWidgetItem(QString("Turismo")));
                    break;
                }
                case 2:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,6,new QTableWidgetItem(QString("Pickup")));
                    break;
                }
                case 3:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,6,new QTableWidgetItem(QString("Camioneta")));
                    break;
                }
            }
            ui->tw_vehiculo_vendidos->setItem(i,7,new QTableWidgetItem(QString("N/A")));
            ui->tw_vehiculo_vendidos->setItem(i,8,new QTableWidgetItem(QString("N/A")));
            ui->tw_vehiculo_vendidos->setItem(i,9,new QTableWidgetItem(QString("N/A")));
            ui->tw_vehiculo_vendidos->setItem(i,10,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetPrecioCompra()).append(" .Lps")));
            ui->tw_vehiculo_vendidos->setItem(i,11,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetPrecioVenta()).append(" .Lps")));
        }else{
            ui->tw_vehiculo_vendidos->setItem(i,0,new QTableWidgetItem(QString("Moto")));
            ui->tw_vehiculo_vendidos->setItem(i,1,new QTableWidgetItem(QString(this->vendidos->at(i)->GetMarca().c_str())));
            ui->tw_vehiculo_vendidos->setItem(i,2,new QTableWidgetItem(QString(this->vendidos->at(i)->GetPlaca().c_str())));
            switch(this->vendidos->at(i)->GetEstado()){
                case 1:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,3,new QTableWidgetItem(QString("Bueno")));
                    break;
                }
                case 2:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,3,new QTableWidgetItem(QString("Reparado")));
                    break;
                }
                case 3:
                {
                    ui->tw_vehiculo_vendidos->setItem(i,3,new QTableWidgetItem(QString("Malo")));
                    break;
                }
            }
            if(this->vendidos->at(i)->GetEstado()==2){
                ui->tw_vehiculo_vendidos->setItem(i,4,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetGastos()).append(" .Lps")));
            }else{
               ui->tw_vehiculo_vendidos->setItem(i,4,new QTableWidgetItem(QString("N/A")));
            }
            ui->tw_vehiculo_vendidos->setItem(i,5,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetKm()).append(" km cds")));
            ui->tw_vehiculo_vendidos->setItem(i,6,new QTableWidgetItem(QString("N/A")));
            if(((Moto*)(this->vendidos->at(i)))->GetSidecar()){
                ui->tw_vehiculo_vendidos->setItem(i,7,new QTableWidgetItem(QString("Si Tiene")));
                switch(((Moto*)(this->vendidos->at(i)))->GetEstadoSidecar()){
                    case 1:
                    {
                        ui->tw_vehiculo_vendidos->setItem(i,8,new QTableWidgetItem(QString("Bueno")));
                        break;
                    }
                    case 2:
                    {
                        ui->tw_vehiculo_vendidos->setItem(i,8,new QTableWidgetItem(QString("Reparado")));
                        break;
                    }
                    case 3:
                    {
                        ui->tw_vehiculo_vendidos->setItem(i,8,new QTableWidgetItem(QString("Malo")));
                        break;
                    }
                }
            }else{
                ui->tw_vehiculo_vendidos->setItem(i,7,new QTableWidgetItem(QString("No Tiene")));
            }
            if(((Moto*)(this->vendidos->at(i)))->GetEstadoSidecar()==2){
                ui->tw_vehiculo_vendidos->setItem(i,9,new QTableWidgetItem(QString::number(((Moto*)(this->vendidos->at(i)))->GetGastos_Sidecar()).append(" .Lps")));
            }else{
                ui->tw_vehiculo_vendidos->setItem(i,9,new QTableWidgetItem(QString("N/A")));
            }
            ui->tw_vehiculo_vendidos->setItem(i,10,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetPrecioCompra()).append(" .Lps")));
            ui->tw_vehiculo_vendidos->setItem(i,11,new QTableWidgetItem(QString::number(this->vendidos->at(i)->GetPrecioVenta()).append(" .Lps")));
        }
    }
}

Inventario::~Inventario()
{
    delete ui;
}
