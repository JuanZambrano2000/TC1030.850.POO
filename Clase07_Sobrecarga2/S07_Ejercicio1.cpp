#include <iostream>
using namespace std;

class Test{
    public:
        Test(){
            cout << "\nDireccion del objeto: " << this << endl;
        };
        void Saludo(){
            cout << "\n Instancia del objeto (metodo): " << this << endl;
        };

    };


int main(){

    Test Obj1;
    Obj1.Saludo();

    Test Obj2;
    Obj2.Saludo();

}
