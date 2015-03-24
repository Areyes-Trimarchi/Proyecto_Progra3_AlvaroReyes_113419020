#ifndef AGREGAR_CARRO_H
#define AGREGAR_CARRO_H

#include <QDialog>
#include "vehiculo.h"
#include "carro.h"
#include <vector>

using std::vector;

namespace Ui {
class Agregar_carro;
}

class Agregar_carro : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar_carro(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0);
    ~Agregar_carro();


private slots:
    void on_pb_agregar_carro_aceptar_clicked();

    void on_rb_estado_reparado_carro_clicked();

    void on_rb_estado_bueno_carro_clicked();

    void on_rb_estado_malo_carro_clicked();

private:
    Ui::Agregar_carro *ui;    
    vector<Vehiculo*>* vehiculos;
};

#endif // AGREGAR_CARRO_H
