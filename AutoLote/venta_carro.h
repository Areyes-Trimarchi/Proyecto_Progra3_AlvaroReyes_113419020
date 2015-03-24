#ifndef VENTA_CARRO_H
#define VENTA_CARRO_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "carro.h"

using std::vector;

namespace Ui {
class Venta_carro;
}

class Venta_carro : public QDialog
{
    Q_OBJECT

public:
    explicit Venta_carro(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0,vector<Vehiculo*>*vendidos=0,int posvector=0);
    ~Venta_carro();

private slots:
    void on_pb_comprar_venta_carro_clicked();

private:
    Ui::Venta_carro *ui;
    vector<Vehiculo*>*vehiculos;
    vector<Vehiculo*>*vendidos;
    int posvector;
};

#endif // VENTA_CARRO_H
