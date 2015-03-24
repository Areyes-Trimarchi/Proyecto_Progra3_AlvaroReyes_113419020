#include "carro.h"
#include "vehiculo.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Carro::Carro(int carro_o_moto,string marca,string placa,int estado,double precio,double kmrecorrido,int tipo):Vehiculo(carro_o_moto,marca,placa,estado,precio,kmrecorrido),tipo(tipo){

}

Carro::Carro(const Carro& other):Vehiculo(other),tipo(other.tipo){

}

Carro::~Carro(){

}

string Carro::toString()const{
    stringstream ss;
    switch(tipo){
        case 1:{
            ss<<"Carro ["<<Vehiculo::toString()<<" , Turismo ]";
            break;
        }
        case 2:{
            ss<<"Carro ["<<Vehiculo::toString()<<" , Pickup ]";
            break;
        }
        case 3:{
            ss<<"Carro ["<<Vehiculo::toString()<<" , Camioneta ]";
            break;
        }
    }
   return ss.str();
}

int Carro::GetTipo(){
    return tipo;
}

void Carro::SetTipo(int tipo){
    this->tipo=tipo;
}

double Carro::GetPrecioVenta()const{
    switch(tipo){
        case 1:
        {
            if(this->GetEstado()==2){
                return (this->GetPrecioCompra()+this->GetGastos()+(30000.00*0.55)-(this->GetKm()*0.25));
            }else if(this->GetEstado()==1){
                return (this->GetPrecioCompra()+30000.00-(this->GetKm()*0.40));
            }else{
                return this->GetPrecioCompra()+10000.00-(this->GetKm()*0.40);
            }
            break;
        }
        case 2:
        {
            if(this->GetEstado()==2){
                return (this->GetPrecioCompra()+this->GetGastos()+(45000.00*0.55)-(this->GetKm()*0.25));
            }else if(this->GetEstado()==1){
                return (this->GetPrecioCompra()+45000.00-(this->GetKm()*0.40));
            }else{
                return this->GetPrecioCompra()+15000.00-(this->GetKm()*0.40);
            }
            break;
        }
        case 3:
        {
            if(this->GetEstado()==2){
                return (this->GetPrecioCompra()+this->GetGastos()+(60000.00*0.55)-(this->GetKm()*0.25));
            }else if(this->GetEstado()==1){
                return (this->GetPrecioCompra()+60000.00-(this->GetKm()*0.40));
            }else{
                return this->GetPrecioCompra()+20000.00-(this->GetKm()*0.40);
            }
            break;
        }
    }

}
