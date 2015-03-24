#ifndef CARRO_H
#define CARRO_H

#include <string>
#include "vehiculo.h"

using std::string;

class Carro : public Vehiculo
{
    int tipo;
public:
    Carro(int,string,string,int,double,double,int);
    Carro(const Carro&);
    ~Carro();
    virtual string toString()const;
    int GetTipo();
    void SetTipo(int);
    virtual double GetPrecioVenta()const;

};

#endif // CARRO_H
