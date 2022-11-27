#include <iostream>
using namespace std;
class Fraccion{
    public:
        int numerador, denominador;
        Fraccion(int numerador, int denominador){
            this->numerador = numerador;
            this->denominador = denominador;
        };
        Fraccion operator * (Fraccion &frac2){
            this->numerador = this->numerador * frac2.numerador;
            this->denominador = this->denominador * frac2.denominador;
            return Fraccion(this->numerador, this->denominador);
        };
};

int main(){
    Fraccion fraccion1(1,2);
    Fraccion fraccion2(1,4);
    Fraccion fraccion3 = fraccion1 * fraccion2;

    cout << "Numerador final: " << fraccion3.numerador << endl;
    cout << "Denominador final: " << fraccion3.denominador << endl;
}