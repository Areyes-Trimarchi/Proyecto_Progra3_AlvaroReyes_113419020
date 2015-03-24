#include "moto.h"
#include <string>
#include <sstream>
#include "vehiculo.h"

using std::string;
using std::stringstream;

Moto::Moto(int carro_o_moto,string marca,string placa,int estado,double precio,double kmrecorrido,bool sidecar):Vehiculo(carro_o_moto,marca,placa,estado,precio,kmrecorrido),sidecar(sidecar)
{

}

Moto::Moto(const Moto& other):Vehiculo(other),sidecar(other.sidecar){

}

Moto::~Moto(){

}

string Moto::toString()const{
    stringstream ss;
    if(sidecar){
        ss<<"Moto ["<<Vehiculo::toString()<<" ,Sidecar: si ]";
    }else{
        ss<<"Moto ["<<Vehiculo::toString()<<" ,Sidecar: no ]";
    }
    return ss.str();
}

bool Moto::GetSidecar()const{
    return sidecar;
}

int Moto::GetEstadoSidecar()const{
    return estado_sidecar;
}

void Moto::SetEstadoSidecar(int estado_sidecar){
    this->estado_sidecar=estado_sidecar;
}

void Moto::SetSidecar(bool sidecar){
    this->sidecar=sidecar;
}

double Moto::GetGastos_Sidecar(){
    return gastos_sidecar;
}

void Moto::SetGastos_Sidecar(double gastos_sidecar){
    this->gastos_sidecar=gastos_sidecar;
}

double Moto::GetPrecio_Compra_Sidecar(){
    return precio_compra_sidecar;
}

void Moto::SetPrecio_Compra_Sidecar(double precio_compra_sidecar){
    this->precio_compra_sidecar=precio_compra_sidecar;
}

double Moto::GetPrecioVenta()const{
    if(this->GetEstado()==2){
        if(sidecar){
            switch(estado_sidecar){
                case 1:
                {
                    return this->GetPrecioCompra()+precio_compra_sidecar+this->GetGastos()+(17000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
                case 2:
                {
                    return this->GetPrecioCompra()+this->GetGastos()+precio_compra_sidecar+gastos_sidecar+(17000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
                case 3:
                {
                    return this->GetPrecioCompra()+this->GetGastos()+precio_compra_sidecar+(17000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
            }
        }else{
                return Vehiculo::GetPrecioCompra()+Vehiculo::GetGastos()+(17000.00*0.55)-(Vehiculo::GetKm()*0.25);
        }
   }else if(this->GetEstado()==1){
        if(sidecar){
            switch(estado_sidecar){
                case 1:
                {
                    return this->GetPrecioCompra()+precio_compra_sidecar+this->GetGastos()+(14000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
                case 2:
                {
                    return this->GetPrecioCompra()+this->GetGastos()+precio_compra_sidecar+gastos_sidecar+(14000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
                case 3:
                {
                    return this->GetPrecioCompra()+this->GetGastos()+precio_compra_sidecar+(14000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
            }
        }else{
                return Vehiculo::GetPrecioCompra()+(14000.00*0.55)-(Vehiculo::GetKm()*0.25);
        }
   }else if(this->GetEstado()==3){
        if(sidecar){
            switch(estado_sidecar){
                case 1:
                {
                    return this->GetPrecioCompra()+precio_compra_sidecar+this->GetGastos()+(10000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
                case 2:
                {
                    return this->GetPrecioCompra()+this->GetGastos()+precio_compra_sidecar+gastos_sidecar+(10000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
                case 3:
                {
                    return this->GetPrecioCompra()+this->GetGastos()+precio_compra_sidecar+(10000.00*0.55)-(this->GetKm()*0.25);
                    break;
                }
            }
        }else{
                return Vehiculo::GetPrecioCompra()+(10000.00*0.55)-(Vehiculo::GetKm()*0.25);
        }
   }
}
