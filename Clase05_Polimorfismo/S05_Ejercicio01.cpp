#include <iostream>
using namespace std;
//Clase padre mamifero
class Mamifero{
    public:
        void mover();
        //Virtual hace referencia al polimorfismo
        virtual void sonido();
};
//Declaracion de metodos de mamifero
void Mamifero::mover(){
    cout<<"\nEl mamifero esta en movimiento"<<endl;
};
void Mamifero::sonido(){
    cout<<"\nEl mamifero hace sonidos"<<endl; 
};
//Clase hija Elefante
class Elefante: public Mamifero{
    public:
    //No es necesario declarar si hicieran lo mismo, pero por polimorfismo van a hacer cosas distintos
        void mover();
        void sonido(); 
};
//Declaracion de metodos de elefante
void Elefante::mover(){
    cout<<"\nEl elefante esta en movimiento"<<endl;
};
void Elefante::sonido(){
    cout<<"\nEl elefante barita"<<endl; 
};
//Main
int main(){
    //Apunta a la localidad de memoria donde guardo un objeto de la clase mamifero
    Mamifero *ptrElefante;
    //Se asigna a la direccion de memoria del objeto de clase elefante
    ptrElefante = new Elefante;
    //La flecha es equivalente al punto
    ptrElefante->mover();
    ptrElefante->sonido();//Por el virtual ejecuta el de la clase hijo
    /*
    Elefante MiElefante;
    MiElefante.mover();
    //Se ejecuto el de la clase derivada, no de la clase padre
    */
}