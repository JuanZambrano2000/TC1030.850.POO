#include <iostream> 
#include <math.h>
#include <cmath>
#define _USE_MATH_DEFINES
# define M_PI 3.14159265358979323846 
using namespace std;
class Circulo{
    public:
        void pideRadio(double _radio);
        double circ_area();
        double circ_perimetro();
    private:
        double radio;
};