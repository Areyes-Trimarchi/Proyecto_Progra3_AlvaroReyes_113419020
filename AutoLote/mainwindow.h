#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"
#include "agregar_vehiculo.h"
#include <vector>

using std::vector;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0,vector<Vehiculo*>*vehiculos=0,vector<Vehiculo*>*vendidos=0);
    ~MainWindow();

private slots:
    void on_pb_agregar_vehiculo_clicked();

    void on_pb_modificar_vehiculo_clicked();

    void on_pb_venta_vehiculo_clicked();

    void on_pb_inventario_clicked();

private:
    Ui::MainWindow *ui;
    vector<Vehiculo*>* vehiculos;
    vector<Vehiculo*>*vendidos;
};

#endif // MAINWINDOW_H
