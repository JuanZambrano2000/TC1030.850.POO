#include <iostream>
using namespace std;
class Vehiculo{
    public:
        void enciende(){
            cout<<"El vehiculo esta en marcha"<<endl;
        }
        string marca="toyota";
    private:  
};
class Auto:public Vehiculo{
    public:
        string modelo="Camry";
};

int main(){
    Auto MiCarrito;
    MiCarrito.enciende();
    cout<<"Marca: "<<MiCarrito.marca<<endl;
    cout<<"Modelo: "<<MiCarrito.modelo<<endl;
}