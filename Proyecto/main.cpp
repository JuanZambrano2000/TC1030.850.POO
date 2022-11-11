#include <iostream> 
using namespace std;
#include "Video.h"
//Para compilar:
//g++ .\main.cpp .\Video.cpp .\Video.h -o compilacion
//Para correr:
//compilacion.exe
int main(){
    int valor;
    int calificacion;
    Video vid1("Compilacion","Gatos asustandose por pepinos","Humor",2012,360);
    Video vid2("Reportaje","Mexico en los anios 50","Historia",95,2016,1024);
    while (true){
        cout<<"Ingresa un numero"<<endl;
        cout<<"1. Calificar video 1"<<endl;
        cout<<"2. Consultar video 1"<<endl;
        cout<<"3. Consultar video 2"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<endl;
        cin>>valor;
        if(valor==1){
            cout<<"Que calificacion le das? "<<endl;
            cin>>calificacion;
            vid1.calificaVideo(calificacion);
        }else if(valor==2){
            vid1.muestraDatos();
        }else if(valor==3){
            vid2.muestraDatos();
        }else if(valor==4){
            cout<<"Gracias, vuelva pronto"<<endl;
            break;
        }else{
            cout<<"Opcion incorrecta"<<endl;  
        }
    }
}              