#include <iostream>
using namespace std;
int main() {
    //Guardamos los elementos que tendra nuestro array
    int cantidadElementos;
    //El apuntador
    int *ptrMasGrande;
    //Pedimos cantidad de elementos
    cout << "Ingresa la cantidad de elementos que quieres: ";
    cin >> cantidadElementos;
    cout << endl;
    int arrayNumeros[cantidadElementos];
    // Guardamos los datos que nos da el usuario
    for(int i = 0; i < cantidadElementos; ++i) {
        cout << "Ingresa el numero " << i + 1 << " del array: ";
        cin >> arrayNumeros[i];
    }
    // Acomodamos para dejar primero al mas grande
    for(int i = 1;i < cantidadElementos; ++i) {
        if(arrayNumeros[0] < arrayNumeros[i]){
        arrayNumeros[0] = arrayNumeros[i];
        }
    }
    ptrMasGrande = &arrayNumeros[0];
    cout << endl << "El elemento mas grande es: " << *ptrMasGrande<<endl;

}
