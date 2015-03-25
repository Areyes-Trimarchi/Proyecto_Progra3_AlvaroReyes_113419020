#include "mainwindow.h"
#include "vehiculo.h"
#include "carro.h"
#include "moto.h"
#include <QApplication>
#include <vector>

using std::vector;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Crear vectores de objetos para almacenar los vehiculos
    //en inventario y los vendidos
    vector<Vehiculo*>*vehiculos=new vector<Vehiculo*>;
    vector<Vehiculo*>*vendidos=new vector<Vehiculo*>;
    MainWindow w(0,vehiculos,vendidos);
    w.show();

    return a.exec();
}
