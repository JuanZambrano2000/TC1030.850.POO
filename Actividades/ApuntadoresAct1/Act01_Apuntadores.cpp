#include <iostream>
using namespace std;


int main(){
    //Creamos dos variables donde se guardaran dos valores
    int a,b;
    //Creamos dos apuntadores
    int *ptrA;
    int *ptrB;
    //Pedimos las entradas para asignar valor a "a" y a "b"
    cout<<"Introduce A: "<<endl;
    cin>>a;
    cout<<"Introduce B: "<<endl;
    cin>>b;
    //Ponemos que nuestros apuntadores son iguales a la direccion de memoria de "a" y "b"
    ptrA = &a;
    ptrB = &b;
    //Tomamos el valor de la direccion de memoria y la imprimimos, despues imprimimos la direccion en si.
    cout<<"Valor de ptrA es: "<<*ptrA<<" y está almacenado en la dirección: "<<ptrA<<endl;
    cout<<"Valor de ptrB es: "<<*ptrB<<" y está almacenado en la dirección: "<<ptrB<<endl;
    cout<<"Direccion de memoria de ptrA es: "<<&ptrA<<endl;
}