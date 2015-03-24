#ifndef VENTA_MOTO_H
#define VENTA_MOTO_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "moto.h"

using std::vector;

namespace Ui {
class Venta_moto;
}

class Venta_moto : public QDialog
{
    Q_OBJECT

public:
    explicit Venta_moto(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0,vector<Vehiculo*>*vendidos=0,int posvector=0);
    ~Venta_moto();

private slots:
    void on_pb_comprar_venta_moto_clicked();

private:
    Ui::Venta_moto *ui;
    vector<Vehiculo*>*vehiculos;
    vector<Vehiculo*>*vendidos;
    int posvector;
};

#endif // VENTA_MOTO_H
