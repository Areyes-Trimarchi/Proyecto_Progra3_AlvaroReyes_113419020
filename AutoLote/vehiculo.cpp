#include "vehiculo.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Vehiculo::Vehiculo(int carro_o_moto,string marca,string placa,int estado,double precio_compra,double kmrecorrido):carro_o_moto(carro_o_moto),marca(marca),placa(placa),estado(estado),precio_compra(precio_compra),kmrecorrido(kmrecorrido){

}

Vehiculo::Vehiculo(const Vehiculo& other):marca(other.marca),placa(other.placa),estado(other.estado),precio_compra(other.precio_compra),kmrecorrido(other.kmrecorrido){

}

Vehiculo::~Vehiculo(){

}

string Vehiculo::toString()const{
    stringstream ss;
    ss<<"Marca: "<<marca<<" , Placa: "<<placa;
    return ss.str();
}

string Vehiculo::GetMarca()const{
    return marca;
}

string Vehiculo::GetPlaca()const{
    return placa;
}

int Vehiculo::GetEstado()const{
    return estado;
}

double Vehiculo::GetKm()const{
    return kmrecorrido;
}

 double Vehiculo::GetPrecioCompra()const{
     return precio_compra;
 }

 void Vehiculo::SetPrecioCompra(double precio_compra){
     this->precio_compra=precio_compra;
 }

double Vehiculo::GetGastos()const{
    return gastos;
}
void Vehiculo::SetGastos(double gastos){
    this->gastos=gastos;
}

void Vehiculo::SetMarca(string marca){
    this->marca=marca;
}

void Vehiculo::SetPlaca(string placa){
    this->placa=placa;
}

void Vehiculo::SetEstado(int estado){
    this->estado=estado;
}

int Vehiculo::GetCarrooMoto()const{
    return carro_o_moto;
}

