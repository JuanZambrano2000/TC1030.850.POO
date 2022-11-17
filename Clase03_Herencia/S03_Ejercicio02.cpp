#include <iostream>
using namespace std;
class Operacion{
    public:
        void pedir1();
        void pedir2();
        void mostrarResultado();
    protected:
        int valor1;
        int valor2;
        int resultado;
};
class Suma:public Operacion{
    public:
        void proceso();
};
//Podemos tener el mismo nombre de metodo en distintas clases
class Resta:public Operacion{
    public:
        void proceso();
};
//......................................................................
void Operacion::pedir1(){
    cout<<"Ingresa el primer valor: ";
    cin >> valor1;
};
void Operacion::pedir2(){
    cout<<"Ingresa el segundo valor: ";
    cin >> valor2;
};
void Operacion::mostrarResultado(){
    cout<<"Resultado: "<<resultado;
};
void Suma::proceso(){
    resultado = valor1+valor2;
};
void Resta::proceso(){
    resultado = valor1-valor2;
};
//......................................................................
int main(){
    Suma MiSuma;
    MiSuma.pedir1();
    MiSuma.pedir2();
    MiSuma.proceso();
    MiSuma.mostrarResultado();
    Resta MiResta;
    cout<<endl;
    MiResta.pedir1();
    MiResta.pedir2();
    MiResta.proceso();
    MiResta.mostrarResultado();
}