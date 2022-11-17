#include <iostream> //<son para librerias>
#include "Equipos.h"
using namespace std;
//Para compilar:
//g++ .\main.cpp .\Equipos.cpp -o compilacion
//Para correr:
//compilacion.exe
int main(){
    Equipo MiEquipo("SF 49ers");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl; 
    MiEquipo.setNombreEquipo("Barcelona");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl;
    
}