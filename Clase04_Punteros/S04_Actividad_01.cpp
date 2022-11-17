#include <iostream>
using namespace std;

void intercambio(int x, int y);

int main(){
    int a = 1;
    int b = 3;
    cout<<"\n a: "<<a<<"\t b: "<<b<<endl;//\t = tabulador
    intercambio(a,b);
    //Solo hace el intercambio en la funcion, pero no cambia nuestro valor original
    cout<<"\n a: "<<a<<"\t b: "<<b<<endl;//\t = tabulador
}

void intercambio(int x, int y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    cout << "\n x: "<<x<<"\t y: "<<y<<endl;
};