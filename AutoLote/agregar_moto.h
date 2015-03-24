#ifndef AGREGAR_MOTO_H
#define AGREGAR_MOTO_H

#include <QDialog>
#include "vehiculo.h"
#include "moto.h"
#include <vector>

using std::vector;

namespace Ui {
class Agregar_moto;
}

class Agregar_moto : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_moto(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0);
    ~Agregar_moto();

private slots:
    void on_rb_carretilla_si_clicked();

    void on_rb_carretilla_no_clicked();

    void on_rb_estado_reparado_carretilla_clicked();

    void on_rb_estado_bueno_carretilla_clicked();

    void on_rb_estado_malo_carretilla_clicked();

    void on_rb_estado_reparado_moto_clicked();

    void on_rb_estado_bueno_moto_clicked();

    void on_rb_estado_malo_moto_clicked();

    void on_pb_agregar_moto_aceptar_clicked();

private:
    Ui::Agregar_moto *ui;
    vector<Vehiculo*>* vehiculos;
};

#endif // AGREGAR_MOTO_H
