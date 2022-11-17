#include <iostream> 
#include <math.h>
#include <cmath>
#define _USE_MATH_DEFINES
# define M_PI 3.14159265358979323846 
using namespace std;
class Circulo{
    public:
        void pideRadio(double _radio){
            radio = _radio;
        };
        double circ_area(){
            return M_PI*pow(radio,2);
        };
        double circ_perimetro(){
            return 2*M_PI*radio;    
        };

    private:
        double radio;
};
int main(){
    Circulo circulo;
    circulo.pideRadio(5);
    cout << "Area: " << circulo.circ_area() << endl;
    cout << "Perimetro: " << circulo.circ_perimetro() << endl;
}