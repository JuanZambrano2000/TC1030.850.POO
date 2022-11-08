#include <iostream> 
using namespace std;
#include "Cuenta.h"
Cuenta::Cuenta(double _saldo){
    if(_saldo<0){
        cout <<"Saldo invalido, su saldo sera 0"<<endl;
        saldo = 0;
    }else{
        saldo = _saldo; 
    }
};
void Cuenta::agrega(double cantidad){
    saldo += cantidad;
};
void Cuenta::retira(double cantidad){
    if(saldo-cantidad<0){
        cout <<"Saldo insuficiente, intente otra cantidad"<<endl;    
    }else{
        saldo -= cantidad;
    }  
};
double Cuenta::obtenerSaldo(){
    return saldo;
}