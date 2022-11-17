#include <iostream>
using namespace std;
//Declaracion de clases
class Vehiculo{
    public:
        Vehiculo(string _NoSerieMotor, string _marca, int _ano, float _precio);
        void imprimirInformacion();
    protected:
        string NoSerieMotor;
        string marca;
        int ano;
        float precio;
};
class AutoCompacto:public Vehiculo{
    public:
        AutoCompacto(string _NoSerieMotor, string _marca, int _ano, float _precio) :Vehiculo(_NoSerieMotor, _marca, _ano, _precio){};
        void setPasajero(int _noPasajeros);
        int getPasajero();
    private:
        int noPasajeros;
};
class Vagoneta:public Vehiculo{
    public:
        Vagoneta(string _NoSerieMotor, string _marca, int _ano, float _precio) :Vehiculo(_NoSerieMotor, _marca, _ano, _precio){};
        void setPasajero(int _noPasajeros);
        int getPasajero();
    private:
        int noPasajeros;
};
class AutoLujo:public Vehiculo{
    public:
        AutoLujo(string _NoSerieMotor, string _marca, int _ano, float _precio) :Vehiculo(_NoSerieMotor, _marca, _ano, _precio){};
        void setPasajero(int _noPasajeros);
        int getPasajero();
        void setIsHibrido(bool _hibrido);
        bool getIsHibrido();
    private:
        int noPasajeros;
        bool hibrido;
};
class Camioneta:public Vehiculo{
    public:
        Camioneta(string _NoSerieMotor, string _marca, int _ano, float _precio) :Vehiculo(_NoSerieMotor, _marca, _ano, _precio){};
        void setPasajero(int _noPasajeros);
        int getPasajero();
        void setCarga(int _capCarga);
        int getCarga();
        void setCantidadEjes(int _cantidadEjes);
        int getCantidadEjes();
    private:
        int noPasajeros;
        int capCarga;
        int cantidadEjes;
};
//Declaracion de metodos
//Clase Vehiculo
Vehiculo::Vehiculo(string _NoSerieMotor, string _marca, int _ano, float _precio){
    NoSerieMotor = _NoSerieMotor;
    marca = _marca;
    ano = _ano;
    precio = _precio;
};
void Vehiculo::imprimirInformacion(){
    cout<<"Numero de serie del motor: "<<NoSerieMotor<<", Marca: "<<marca<<", Año: "<<ano<<", Precio: "<<precio<<endl;
};
//Clase AutoCompacto
void AutoCompacto::setPasajero(int _noPasajeros){
    noPasajeros = _noPasajeros;
};
int AutoCompacto::getPasajero(){
    return noPasajeros;
};
//Clase Vagoneta
void Vagoneta::setPasajero(int _noPasajeros){
    noPasajeros = _noPasajeros;
};
int Vagoneta::getPasajero(){
    return noPasajeros;
};
//Clase AutoLujo
void AutoLujo::setPasajero(int _noPasajeros){
    noPasajeros = _noPasajeros;
};
int AutoLujo::getPasajero(){
    return noPasajeros;
};
void AutoLujo::setIsHibrido(bool _hibrido){
    hibrido = _hibrido;
};
bool AutoLujo::getIsHibrido(){
    return hibrido;
}
//Clase Camioneta
void Camioneta::setPasajero(int _noPasajeros){
    noPasajeros = _noPasajeros;
};
int Camioneta::getPasajero(){
    return noPasajeros;
};
void Camioneta::setCarga(int _capCarga){
    capCarga = _capCarga;
};
int Camioneta::getCarga(){
    return capCarga;
};
void Camioneta::setCantidadEjes(int _cantidadEjes){
    cantidadEjes = _cantidadEjes;
};
int Camioneta::getCantidadEjes(){
    return cantidadEjes;
};
int main(){
    //Coche compacto
    cout<<"Coche compacto"<<endl;
    AutoCompacto MyAutoCompacto("APBOB102","Nissan",2008,100000);
    MyAutoCompacto.imprimirInformacion();
    MyAutoCompacto.setPasajero(5);
    cout<<"Pasajeros: "<<MyAutoCompacto.getPasajero()<<endl;
    //Vagoneta
    cout<<"Vagoneta"<<endl;
    Vagoneta MyVagoneta("GVHNTJ13","Toyota",2015,150000);
    MyVagoneta.imprimirInformacion();
    MyVagoneta.setPasajero(12);
    cout<<"Pasajeros: "<<MyVagoneta.getPasajero()<<endl;
    //Auto de Lujo
    cout<<"Auto de lujo"<<endl;
    AutoLujo MyAutoLujo("APBOB102","Mercedes",1996,50000);
    MyAutoLujo.imprimirInformacion();
    MyAutoLujo.setPasajero(2);
    cout<<"Pasajeros: "<<MyAutoLujo.getPasajero()<<endl;
    MyAutoLujo.setIsHibrido(true);
    cout<<"Es Hibrido: (1=si,0=no) "<<MyAutoLujo.getIsHibrido()<<endl;
    //Camioneta
    cout<<"Camioneta"<<endl;
    Camioneta MyCamioneta("JTVKIW4B","Ford",2006,80000);
    MyCamioneta.imprimirInformacion();
    MyCamioneta.setPasajero(6);
    cout<<"Pasajeros: "<<MyCamioneta.getPasajero()<<endl;
    MyCamioneta.setCarga(950);
    cout<<"Capacidad de carga: "<<MyCamioneta.getCarga()<<endl;
    MyCamioneta.setCantidadEjes(3);
    cout<<"Cantidad de ejes: "<<MyCamioneta.getCantidadEjes()<<endl;
}