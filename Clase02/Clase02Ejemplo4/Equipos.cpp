#include <iostream>
#include "Equipos.h"
using namespace std;
Equipo::Equipo(string _nombreEquipo){
            nombreEquipo = _nombreEquipo;
        };
void Equipo::setNombreEquipo(string _nombreEquipo){
            nombreEquipo = _nombreEquipo;
        };
string Equipo::getNombreEquipo(){
            return nombreEquipo;
        };