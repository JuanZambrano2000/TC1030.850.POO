#include <iostream>
using namespace std;
//Pasamos dos apuntadores que apuntan a ints
void intercambio(int *x, int *y);

int main(){
    int a = 1;
    int b = 3;
    cout<<"\n a: "<<a<<"\t b: "<<b<<endl;//\t = tabulador
    //Pasamos las direcciones de memoria donde se encuentran a y b, no su valor
    intercambio(&a,&b);
    //Ya nos hace el cambio por que accedemos a la direccion donde esta la variable y la cambiamos
    //Antes nos creaba una variable temporal local
    cout<<"\n a: "<<a<<"\t b: "<<b<<endl;//\t = tabulador
}
//Al pasar una direccion de memoria el argumento debe recibir un apuntador
void intercambio(int *x, int *y){
    int tmp;
    //tmp sea igual al contenido de x
    tmp = *x;
    //que el contenido de x sea igual al contenido de y
    *x = *y;
    //que el contenido de y sea igual al tmp
    *y = tmp;
    //Nos imprime la direccion donde se encuetran las variables a y b
    cout << "\n x: "<<x<<"\t y: "<<y<<endl;
    //Para desplegar su contenido tenemos que poner un apuntador para acceder al contenido
    cout << "\n x: "<<*x<<"\t y: "<<*y<<endl;
};