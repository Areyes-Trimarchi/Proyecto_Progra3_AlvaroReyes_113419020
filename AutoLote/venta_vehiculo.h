#ifndef VENTA_VEHICULO_H
#define VENTA_VEHICULO_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"

using std::vector;

namespace Ui {
class Venta_vehiculo;
}

class Venta_vehiculo : public QDialog
{
    Q_OBJECT

public:
    explicit Venta_vehiculo(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0,vector<Vehiculo*>*vendidos=0);
    ~Venta_vehiculo();

private slots:
    void on_pb_venta_vehiculo_aceptar_clicked();

private:
    Ui::Venta_vehiculo *ui;
    vector<Vehiculo*>*vehiculos;
    vector<Vehiculo*>*vendidos;
};

#endif // VENTA_VEHICULO_H
