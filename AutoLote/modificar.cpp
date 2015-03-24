#include "modificar.h"
#include "ui_modificar.h"
#include <QStringList>
#include <vector>
#include "vehiculo.h"
#include "modificar_carro.h"
#include "modificar_moto.h"
#include "carro.h"
#include "moto.h"
#include "error.h"

using std::vector;

Modificar::Modificar(QWidget *parent,vector<Vehiculo*>*vehiculos) :
    QDialog(parent),
    ui(new Ui::Modificar)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
}

Modificar::~Modificar()
{
    delete ui;
}

void Modificar::on_pb_modificar_carro_clicked()
{
    int cont_carros=0;
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->GetCarrooMoto()==1){
        cont_carros++;
        }
    }
    if(cont_carros>0){
        Modificar_carro modif_carro(0,vehiculos);
        modif_carro.setModal(true);
        modif_carro.exec();
        this->close();
    }else{
        Error error(0,"No Hay Carros");
        error.setModal(true);
        error.exec();
    }
}

void Modificar::on_pb_modificar_moto_clicked()
{
    int cont_motos=0;
    for(int i=0;i<vehiculos->size();i++){
        if(vehiculos->at(i)->GetCarrooMoto()==2){
        cont_motos++;
        }
    }
    if(cont_motos>0){
        Modificar_moto modif_moto(0,vehiculos);
        modif_moto.setModal(true);
        modif_moto.exec();
        this->close();
    }else{
        Error error(0,"No Hay Carros");
        error.setModal(true);
        error.exec();
        this->close();
    }
}
