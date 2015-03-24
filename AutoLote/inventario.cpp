#include "inventario.h"
#include "ui_inventario.h"
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"

using std::vector;

Inventario::Inventario(QWidget *parent,vector<Vehiculo*>*vehiculos,vector<Vehiculo*>*vendidos) :
    QDialog(parent),
    ui(new Ui::Inventario)
{
    ui->setupUi(this);
    this->vehiculos=vehiculos;
    this->vendidos=vendidos;
}

Inventario::~Inventario()
{
    delete ui;
}
