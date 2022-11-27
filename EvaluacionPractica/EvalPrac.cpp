#include <iostream>
using namespace std;
class Tiempo{
    public:
        Tiempo(int horas, int minutos, int segundos);
        Tiempo operator+(Tiempo tiem2){
            Tiempo newTiempo(0,0,0);
            int segundoTemp, minutoTemp, horaTemp;
            newTiempo.segundos = this->segundos+tiem2.segundos;
            newTiempo.minutos = (this->minutos+tiem2.minutos)+(newTiempo.segundos/60);
            newTiempo.horas = (this->horas+tiem2.horas)+(newTiempo.minutos/60);
            newTiempo.segundos =  newTiempo.segundos%60;
            newTiempo.minutos =  newTiempo.minutos%60;
            return newTiempo;
        };
        virtual void bienvenida(){
            cout<<"Bienvenido al reloj principal"<<endl;  
        };
        virtual void imprimeInformacion(){
            cout<<"Horas: "<<horas<<", Minutos: "<<minutos<<", Segundos: "<<segundos<<endl;
        };
    protected:
        int horas;
        int minutos;
        int segundos;
};
class Reloj:public Tiempo{
    public:
        Reloj(int dias, int horas, int minutos, int segundos):Tiempo(horas, minutos, segundos){
            this->dias=dias;
        };
        void bienvenida(){
            Tiempo::bienvenida();
            cout<<"Bienvenido al reloj derivado"<<endl;   
        };
        void imprimeInformacion(){
            //Tiempo::imprimeInformacion();
            cout<<"Dias: "<<dias<<endl;
        }
    private:
        int dias;
};
Tiempo::Tiempo(int horas, int minutos, int segundos){
    this->horas=horas;
    this->minutos=minutos;
    this->segundos=segundos;
};
int main(){
    Tiempo tiempo1(12,10,25);
    Tiempo agregar(1,20,55);
    Tiempo nueva = tiempo1+agregar;
    nueva.imprimeInformacion();
    Tiempo *reloj1 = new Reloj(12,5,15,35);
    reloj1->bienvenida();
    reloj1->imprimeInformacion();
}