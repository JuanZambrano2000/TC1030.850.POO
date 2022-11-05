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