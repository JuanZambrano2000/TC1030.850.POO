#include <iostream>
using namespace std; //estoy precargando el standard y ya no lo tenemos que poner
class MiClase{
    public:
        void MiMetodo(){ //Metodo
            cout << "Saludos desde el metodo" << endl;
        };
};
int main()
{
    MiClase miObjeto;
    miObjeto.MiMetodo();
}