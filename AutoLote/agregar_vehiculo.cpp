#include "agregar_vehiculo.h"
#include "ui_agregar_vehiculo.h"
#include "agregar_carro.h"
#include "agregar_moto.h"
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"
#include <vector>

using std::vector;

Agregar_vehiculo::Agregar_vehiculo(QWidget *parent,vector<Vehiculo*>*vehiculos) :
    QDialog(parent),
    ui(new Ui::Agregar_vehiculo)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
}

Agregar_vehiculo::~Agregar_vehiculo()
{
    delete ui;
}

void Agregar_vehiculo::on_pb_cancelar_clicked()
{

}
//Evento cuando se le da click al boton para agregar carros
void Agregar_vehiculo::on_pb_agregar_carro_clicked()
{
    Agregar_carro agregar_carro(0,vehiculos);
    agregar_carro.setModal(true);
    agregar_carro.exec();
    this->close();
}
//Evento cuando se le da click al boton para agregar motos
void Agregar_vehiculo::on_pb_agregar_moto_clicked()
{
    Agregar_moto agregar_moto(0,vehiculos);
    agregar_moto.setModal(true);
    agregar_moto.exec();
    this->close();
}
