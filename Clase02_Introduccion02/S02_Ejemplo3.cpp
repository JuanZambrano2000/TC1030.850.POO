#include <iostream>
using namespace std;
class Equipo{
    public:
        Equipo(string _nombreEquipo);
        void setNombreEquipo(string _nombreEquipo);
        string getNombreEquipo();
    private:
        string nombreEquipo;
};
//........................Definicion de metodos.........................
Equipo::Equipo(string _nombreEquipo){
            nombreEquipo = _nombreEquipo;
        };
void Equipo::setNombreEquipo(string _nombreEquipo){
            nombreEquipo = _nombreEquipo;
        };
string Equipo::getNombreEquipo(){
            return nombreEquipo;
        };
//........................Programa principal.........................
int main(){
    Equipo MiEquipo("SF 49ers");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl; 
    MiEquipo.setNombreEquipo("Barcelona");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl;
    
}
