#ifndef MODIFICAR_CARRO_H
#define MODIFICAR_CARRO_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"

using std::vector;

namespace Ui {
class Modificar_carro;
}

class Modificar_carro : public QDialog
{
    Q_OBJECT

public:
    explicit Modificar_carro(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0);
    ~Modificar_carro();

private slots:
    void on_rb_estado_reparado_carro_modificar_clicked();

    void on_rb_estado_bueno_carro_modificar_clicked();

    void on_rb_estado_malo_carro_modificar_clicked();

    void on_cb_modificar_carro_activated(int index);

    void on_pb_modificar_carro_aceptar_clicked();

private:
    Ui::Modificar_carro *ui;
    vector<Vehiculo*>*vehiculos;
};

#endif // MODIFICAR_CARRO_H
