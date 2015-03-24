#ifndef MODIFICAR_MOTO_H
#define MODIFICAR_MOTO_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"

using std::vector;

namespace Ui {
class Modificar_moto;
}

class Modificar_moto : public QDialog
{
    Q_OBJECT

public:
    explicit Modificar_moto(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0);
    ~Modificar_moto();

private slots:
    void on_rb_carretilla_si_modificar_clicked();

    void on_rb_carretilla_no_modificar_clicked();

    void on_rb_estado_reparado_carretilla_modificar_clicked();

    void on_rb_estado_bueno_carretilla_modificar_clicked();

    void on_rb_estado_malo_carretilla_modificar_clicked();

    void on_rb_estado_reparado_moto_modificar_clicked();

    void on_rb_estado_bueno_moto_modificar_clicked();

    void on_rb_estado_malo_moto_modificar_clicked();

    void on_cb_modificar_moto_activated(int index);

    void on_pb_agregar_moto_aceptar_modificar_clicked();

private:
    Ui::Modificar_moto *ui;
    vector<Vehiculo*>*vehiculos;
};

#endif // MODIFICAR_MOTO_H
