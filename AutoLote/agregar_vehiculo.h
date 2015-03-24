#ifndef AGREGAR_VEHICULO_H
#define AGREGAR_VEHICULO_H

#include <QDialog>
#include "vehiculo.h"
#include "agregar_carro.h"
#include "agregar_moto.h"
#include "moto.h"
#include "carro.h"
#include <vector>

using std::vector;

namespace Ui {
class Agregar_vehiculo;
}

class Agregar_vehiculo : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_vehiculo(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0);
    ~Agregar_vehiculo();

private slots:
    void on_pb_cancelar_clicked();

    void on_pb_agregar_carro_clicked();

    void on_pb_agregar_moto_clicked();

private:
    Ui::Agregar_vehiculo *ui;    
    vector<Vehiculo*>* vehiculos;
};

#endif // AGREGAR_VEHICULO_H
