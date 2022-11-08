#include <iostream> 
using namespace std;
class Cuenta{
    public:
        Cuenta(double _saldo);
        void agrega(double cantidad);
        void retira(double cantidad);
        double obtenerSaldo();
    private:
        double saldo;
};
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