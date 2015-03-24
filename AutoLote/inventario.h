#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"

using std::vector;

namespace Ui {
class Inventario;
}

class Inventario : public QDialog
{
    Q_OBJECT

public:
    explicit Inventario(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0,vector<Vehiculo*>*vendidos=0);
    ~Inventario();

private:
    Ui::Inventario *ui;
    vector<Vehiculo*>*vehiculos;
    vector<Vehiculo*>*vendidos;
};

#endif // INVENTARIO_H
