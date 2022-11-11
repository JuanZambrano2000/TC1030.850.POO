#include <iostream>
using namespace std; //estoy precargando el standard y ya no lo tenemos que poner
class Fruta{
    public:
        string tam;
        string color;
        double peso;
    private:
        string variedad;
};

int main()
{
    Fruta manzana;
    manzana.tam="chica";
    manzana.peso=0.2;
    manzana.color="roja";
    //std::cout << "Hello World" << std::endl;
    cout << "Color: " << manzana.color <<"\n"; //\n significa salto de linea
    cout << "Peso: " << manzana.peso <<"\n";
    cout << "Tamano: " << manzana.tam <<"\n";
}