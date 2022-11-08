#include <iostream> 
using namespace std;
class Cuenta{
    public:
        Cuenta(double _saldo);
        void agrega(double cantidad);
        void retira(double cantidad);
        double obtenerSaldo();
    private:
        double saldo;
};