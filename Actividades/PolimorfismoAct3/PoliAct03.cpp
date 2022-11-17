#include <iostream>
using namespace std;
class Transporte{
    public:
        Transporte(string marca, int noPasajeros);
        virtual void modelo();
    protected:
        string marca;
        int noPasajeros;
};
Transporte::Transporte(string marca, int noPasajeros){
    this->marca=marca;
    this->noPasajeros=noPasajeros;
};
void Transporte::modelo(){
    cout<<"Marca: "<<marca<<endl;
    cout<<"Numero de pasajeros: "<<noPasajeros<<endl;
};
class Moto:public Transporte{
    public:
        Moto(string marca, int noPasajeros, float precio);   
        void modelo();
    private:
        float precio;
};
Moto::Moto(string marca, int noPasajeros, float precio):Transporte(marca, noPasajeros){
    this->precio=precio;
};
void Moto::modelo(){
    Transporte::modelo();
    cout<<"Precio: "<<precio<<endl;
};
class Camion:public Transporte{
    public:
        Camion(string marca, int noPasajeros, int tonCarga);  
        void modelo();
    private:
        int tonCarga;
};
Camion::Camion(string marca, int noPasajeros, int tonCarga):Transporte(marca, noPasajeros){
    this->tonCarga=tonCarga;
};
void Camion::modelo(){
    Transporte::modelo();
    cout<<"Toneladas de carga: "<<tonCarga<<endl;
};
int main(){
    Transporte *vehiculos[3];
    vehiculos[0]=new Moto("Honda",2,35000);  
    vehiculos[1]=new Camion("Isuzu",3,1);
    vehiculos[2]=new Transporte("BMW",4);
    vehiculos[0]->modelo();
    cout<<"----------------------------------"<<endl;
    vehiculos[1]->modelo();
    cout<<"----------------------------------"<<endl;
    vehiculos[2]->modelo();
}