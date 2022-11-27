#include <iostream> 
using namespace std;
#include "Video.h"
//Para compilar:
//g++ .\main.cpp .\Video.cpp .\Video.h -o compilacion
//Para correr:
//.\compilacion.exe
int main(){
    int valorMenu;
    int calificacion;
    Serie *series[3];
    Pelicula *peliculas[3];
    series[0] = new Serie("Serie","Mejor llama a Saul","Drama",-1,2012,70,255);
    series[1] = new Serie("Serie","Residente Malvado","Terror",-1,2021,65,850);
    series[2] = new Serie("Serie","Amigos","Comedia",-1,1995,40,255);
    peliculas[0] = new Pelicula("Pelicula","Forrest Gump","Comedia",-1,1998,135,2);
    peliculas[1] = new Pelicula("Pelicula","Conductor bebe","Drama",-1,2014,97,4);
    peliculas[2] = new Pelicula("Pelicula","Perros de reserva","Accion",-1,2000,130,5); 
    while (valorMenu!=7){
        int valorSubMenu;
        int valorCalificacion;
        cout<<"Ingresa un numero"<<endl;
        cout<<"1. Consultar peliculas"<<endl;
        cout<<"2. Consultar series"<<endl;
        cout<<"3. Calificar peliculas"<<endl;
        cout<<"4. Calificar series"<<endl;
        cout<<"5. Consultar peliculas con cierta calificacion"<<endl;
        cout<<"6. Consultar series con cierta calificacion"<<endl;
        cout<<"7. Salir"<<endl;
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
                if(valorCalificacion<0 || valorCalificacion>100){
                    cout<<"Calificacion invalida"<<endl;
                }else{
                    peliculas[valorSubMenu]->calificaVideo(valorCalificacion);  
                } 
            }
        }else if(valorMenu==4){
            cout<<"Tenemos "<<sizeof(series)/sizeof(series[0])<<" series, cual quieres calificar?"<<endl;
            cin>>valorSubMenu;
            if(valorSubMenu>sizeof(series)/sizeof(series[0]) || valorSubMenu<0){
                cout<<"Error de indice, no existe esa serie"<<endl;
            }else{
                cout<<"Que calificacion quieres dar? "<<endl;
                cin>>valorCalificacion;
                if(valorCalificacion<0 || valorCalificacion>100){
                    cout<<"Calificacion invalida"<<endl;
                }else{
                    series[valorSubMenu]->calificaVideo(valorCalificacion);   
                } 
            }
        }else if(valorMenu==5){
            char opcion;
            int calificacion;
            cout<<"peliculas con que calificacion? "<<endl;
            cin>>calificacion;
            cout<<"calificacion mayor (a), menor (b) o igual (c)?"<<endl;   
            cin>>opcion;
            if(opcion=='a'){
                for(int i=0;i<sizeof(peliculas)/sizeof(peliculas[0]);i++){
                    if(calificacion<peliculas[i]->getCalificacion() && peliculas[i]->getCalificacion()>0){
                        peliculas[i]->muestraDatos();
                    }
                }
            }else if(opcion=='b'){
                for(int i=0;i<sizeof(peliculas)/sizeof(peliculas[0]);i++){
                    if(calificacion>peliculas[i]->getCalificacion() && peliculas[i]->getCalificacion()>0){
                        peliculas[i]->muestraDatos();
                    }
                }
            }else if (opcion=='c'){
                for(int i=0;i<sizeof(peliculas)/sizeof(peliculas[0]);i++){
                    if(calificacion=peliculas[i]->getCalificacion() && peliculas[i]->getCalificacion()>0){
                        peliculas[i]->muestraDatos();
                    }
                }
            }else{
                cout<<"Elija un caracter valido"<<endl;
            }  
        }else if(valorMenu==6){
            char opcion;
            int calificacion;
            cout<<"Series con que calificacion? "<<endl;
            cin>>calificacion;
            cout<<"calificacion mayor (a), menor (b) o igual (c)?"<<endl;   
            cin>>opcion;
            if(opcion=='a'){
                for(int i=0;i<sizeof(series)/sizeof(series[0]);i++){
                    if(calificacion<series[i]->getCalificacion() && series[i]->getCalificacion()>0){
                        series[i]->muestraDatos();
                    }
                }
            }else if(opcion=='b'){
                for(int i=0;i<sizeof(series)/sizeof(series[0]);i++){
                    if(calificacion>series[i]->getCalificacion() && series[i]->getCalificacion()>0){
                        series[i]->muestraDatos();
                    }
                }
            }else if (opcion=='c'){
                for(int i=0;i<sizeof(series)/sizeof(series[0]);i++){
                    if(calificacion=series[i]->getCalificacion() && series[i]->getCalificacion()>0){
                        series[i]->muestraDatos();
                    }
                }
            }else{
                cout<<"Elija un caracter valido"<<endl;
            }      
        }else if(valorMenu==7){
            cout<<"Gracias, vuelva pronto"<<endl;
            break;
        }else{
            cout<<"Opcion incorrecta"<<endl;  
        }
    }
}              