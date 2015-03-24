#ifndef MODIFICAR_H
#define MODIFICAR_H

#include <QDialog>
#include <vector>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"

using std::vector;

namespace Ui {
class Modificar;
}

class Modificar : public QDialog
{
    Q_OBJECT

public:
    explicit Modificar(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0);
    ~Modificar();

private slots:
    void on_pb_modificar_carro_clicked();

    void on_pb_modificar_moto_clicked();

private:
    Ui::Modificar *ui;
    vector<Vehiculo*>*vehiculos;
};

#endif // MODIFICAR_H
