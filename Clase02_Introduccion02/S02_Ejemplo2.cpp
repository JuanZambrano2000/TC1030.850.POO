#include <iostream>
using namespace std;
class Equipo{
    public:
        Equipo(string _nombreEquipo){
            nombreEquipo = _nombreEquipo;
        };
        //Setter
        void setNombreEquipo(string _nombreEquipo){
            nombreEquipo = _nombreEquipo;
        };
        string getNombreEquipo(){
            return nombreEquipo;
        };
    private:
        string nombreEquipo;
};

int main(){
    Equipo MiEquipo("SF 49ers");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl; 
    MiEquipo.setNombreEquipo("Barcelona");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl;
    
}
