#ifndef MOTO_H
#define MOTO_H

#include "vehiculo.h"
#include <string>

using std::string;

class Moto: public Vehiculo
{
    bool sidecar;
    int estado_sidecar;
    double gastos_sidecar,precio_compra_sidecar;
public:
    Moto(int,string,string,int,double,double,bool);
    Moto(const Moto&);
    ~Moto();
    virtual string toString()const;
    bool GetSidecar()const;
    void SetSidecar(bool);
    int GetEstadoSidecar()const;
    void SetEstadoSidecar(int estado_sidecar);
    double GetGastos_Sidecar();
    void SetGastos_Sidecar(double);
    double GetPrecio_Compra_Sidecar();
    void SetPrecio_Compra_Sidecar(double);
    virtual double GetPrecioVenta()const;
};

#endif // MOTO_H
