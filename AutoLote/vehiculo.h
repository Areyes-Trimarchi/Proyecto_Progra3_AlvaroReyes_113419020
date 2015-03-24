#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

using std::string;

class Vehiculo
{
       string marca,placa;
       int estado,carro_o_moto;
       double precio_venta,precio_compra,kmrecorrido,gastos;
public:
    Vehiculo(int,string,string,int,double=0.0,double=0.0);
    Vehiculo(const Vehiculo&);
    ~Vehiculo();
    virtual string toString()const;
    string GetMarca()const;
    string GetPlaca()const;
    int GetEstado()const;
    int GetCarrooMoto()const;
    double GetKm()const;
    virtual double GetPrecioVenta()const=0;
    double GetPrecioCompra()const;
    void SetPrecioCompra(double);
    double GetGastos()const;
    void SetGastos(double);
    void SetMarca(string);
    void SetPlaca(string);
    void SetEstado(int);
};

#endif // VEHICULO_H
