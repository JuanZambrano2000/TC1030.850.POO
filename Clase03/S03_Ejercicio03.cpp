#include <iostream>
using namespace std;
class Animal{
    public: 
        Animal(int _edad){
            edad = _edad;
        };
        void setEdad(int _edad){
            edad = _edad;
        };
        int getEdad(){
            return edad;
        };
    private:
        int edad;
};
class Perro:public Animal{
    public:
        Perro(int _edad): Animal(_edad){};//Hacemos referencia al constructor de la clase padre
};
class Delfin:public Animal{
    public:
        Delfin(int _edad, float _peso): Animal(_edad){
            peso = _peso;
        };
        float getPeso(){
            return peso;
        }
    private:
        float peso;
};
//...........................................................................
int main(){
    Perro MiPerro(5);
    cout<<"La edad del perro es: "<<MiPerro.getEdad()<<endl;
    MiPerro.setEdad(15);
    cout<<"La edad nueva del perro es: "<<MiPerro.getEdad()<<endl;
    Delfin MiDelfin(10,50.8);
    cout<<"El peso del delfin es: "<<MiDelfin.getPeso()<<endl;
}