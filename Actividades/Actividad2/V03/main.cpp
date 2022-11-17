#include <iostream> 
#include <math.h>
#include <cmath>
#include "Circulo.h"
#define _USE_MATH_DEFINES
# define M_PI 3.14159265358979323846 
using namespace std;
//Para compilar:
//g++ .\main.cpp .\Equipos.cpp -o compilacion
//Para correr:
//compilacion.exe
int main(){
    Circulo circulo;
    circulo.pideRadio(5);
    cout << "Area: " << circulo.circ_area() << endl;
    cout << "Perimetro: " << circulo.circ_perimetro() << endl;
}