#include <iostream> 
using namespace std;
#include "Video.h"
//Para compilar:
//g++ .\main.cpp .\Video.cpp .\Video.h -o compilacion
//Para correr:
//compilacion.exe
int main(){
    int valorMenu;
    int calificacion;
    Video *series[3];
    Video *peliculas[2];
    series[0] = new Serie("Serie","Mejor llama a Saul","Drama",2012,70);
    series[1] = new Serie("Serie","Residente Malvado","Terror",2021,65);
    series[2] = new Serie("Serie","Amigos","Comedia",1995,40);
    peliculas[0] = new Pelicula("Pelicula","Forrest Gump","Comedia",1998,135);
    peliculas[1] = new Pelicula("Pelicula","Conductor bebe","Drama",2014,97);
    int size = sizeof(series)/sizeof(series[0]);
    cout<<size;
    while (valorMenu!=5){
        int valorSubMenu;
        int valorCalificacion;
        cout<<"Ingresa un numero"<<endl;
        cout<<"1. Consultar peliculas"<<endl;
        cout<<"2. Consultar series"<<endl;
        cout<<"3. Calificar peliculas"<<endl;
        cout<<"4. Calificar series"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>valorMenu;
        if(valorMenu==1){
            cout<<"Tenemos "<<sizeof(peliculas)/sizeof(peliculas[0])<<" peliculas, cual quieres consultar?"<<endl;
            cin>>valorSubMenu;
            if(valorSubMenu>sizeof(peliculas)/sizeof(peliculas[0]) || valorSubMenu<0){
                cout<<"Error de indice, no existe esa pelicula"<<endl;
            }else{
                peliculas[valorSubMenu]->muestraDatos();   
            }
        }else if(valorMenu==2){
            cout<<"Tenemos "<<sizeof(series)/sizeof(series[0])<<" series, cual quieres consultar?"<<endl;
            cin>>valorSubMenu;
            if(valorSubMenu>sizeof(series)/sizeof(series[0]) || valorSubMenu<0){
                cout<<"Error de indice, no existe esa serie"<<endl;
            }else{
                series[valorSubMenu]->muestraDatos();   
            }
        }else if(valorMenu==3){
            cout<<"Tenemos "<<sizeof(peliculas)/sizeof(peliculas[0])<<" peliculas, cual quieres calificar?"<<endl;
            cin>>valorSubMenu;
            if(valorSubMenu>sizeof(peliculas)/sizeof(peliculas[0]) || valorSubMenu<0){
                cout<<"Error de indice, no existe esa pelicula"<<endl;
            }else{
                cout<<"Que calificacion quieres dar? "<<endl;
                cin>>valorCalificacion;
                peliculas[valorSubMenu]->calificaVideo(valorCalificacion);   
            }
        }else if(valorMenu==4){
            cout<<"Tenemos "<<sizeof(series)/sizeof(series[0])<<" series, cual quieres calificar?"<<endl;
            cin>>valorSubMenu;
            if(valorSubMenu>sizeof(series)/sizeof(series[0]) || valorSubMenu<0){
                cout<<"Error de indice, no existe esa serie"<<endl;
            }else{
                cout<<"Que calificacion quieres dar? "<<endl;
                cin>>valorCalificacion;
                series[valorSubMenu]->calificaVideo(valorCalificacion);   
            }
        }else if(valorMenu==5){
            cout<<"Gracias, vuelva pronto"<<endl;
            break;
        }else{
            cout<<"Opcion incorrecta"<<endl;  
        }
    }
}              