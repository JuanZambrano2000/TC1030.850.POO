#include <iostream> 
#include <math.h>
#include <cmath>
#include "Circulo.h"
#define _USE_MATH_DEFINES
# define M_PI 3.14159265358979323846 
using namespace std;
void Circulo::pideRadio(double _radio){
            radio = _radio;
        };
double Circulo::circ_area(){
            return M_PI*pow(radio,2);
        };
double Circulo::circ_perimetro(){
            return 2*M_PI*radio;    
        };