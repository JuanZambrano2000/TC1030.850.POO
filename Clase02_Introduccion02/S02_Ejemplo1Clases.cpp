#include <iostream>
using namespace std;
class Equipo{
    public:
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
    Equipo MiEquipo;
    MiEquipo.setNombreEquipo("SF 49ers");
    cout << "Nombre equipo: " << MiEquipo.getNombreEquipo() << endl;
}
