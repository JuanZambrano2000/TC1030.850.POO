#include <iostream>
using namespace std;
class Habitacion{
    public:
        double Area(double largo, double ancho);
        double Volumen(double largo, double ancho, double alto);
    private:
        double area;
        double volumen;
};
class Otra{
    double Volumen;
};
//Resolucion de ambito = Habitacion::Area
//................................................
double Habitacion::Area(double largo, double ancho){
            area = largo*ancho;
            return area;
        };
double Habitacion::Volumen(double largo, double ancho, double alto){
            volumen = largo*ancho*alto;
            return volumen;
        };
//.................................................
int main(){
    Habitacion sala;
    cout << "Area: "<<sala.Area(10,5)<<endl;
    cout << "Volumen: "<<sala.Volumen(10,5,2)<<endl;

}