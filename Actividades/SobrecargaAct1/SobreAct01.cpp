#include <iostream>
using namespace std;
class Fraccion{
    public:
        int numerador, denominador;
        Fraccion(int numerador, int denominador){
            this->numerador = numerador;
            this->denominador = denominador;
        };
        Fraccion operator - (Fraccion resultadoFraccion){
            Fraccion new_Fraccion(1,1);
            new_Fraccion.numerador = (this->numerador * resultadoFraccion.denominador) - (this->denominador * resultadoFraccion.numerador);
            new_Fraccion.denominador = this->denominador * resultadoFraccion.denominador;
            return new_Fraccion;
        };
};

int main(){
    Fraccion fraccion1(1,2);
    Fraccion fraccion2(1,4);
    Fraccion fraccion3 = fraccion1 - fraccion2;

    cout << "Numerador final: " << fraccion3.numerador << endl;
    cout << "Denominador final: " << fraccion3.denominador << endl;
}