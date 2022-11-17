#include <iostream> 
using namespace std;
#include "Cuenta.h"
//Para compilar:
//g++ .\main.cpp .\Cuenta.cpp .\Cuenta.h -o compilacion
//Para correr:
//compilacion.exe
int main(){
    Cuenta miguel(-20);
    cout << "Saldo actual: "<<miguel.obtenerSaldo()<<endl;
    miguel.agrega(200);
    cout << "Saldo actual: "<<miguel.obtenerSaldo()<<endl;
    miguel.retira(120);
    cout << "Saldo actual: "<<miguel.obtenerSaldo()<<endl;
    
    Cuenta jose(25);
    cout << "Saldo actual: "<<jose.obtenerSaldo()<<endl;
    jose.agrega(50);
    cout << "Saldo actual: "<<jose.obtenerSaldo()<<endl;
    jose.retira(120);
    cout << "Saldo actual: "<<jose.obtenerSaldo()<<endl;
}