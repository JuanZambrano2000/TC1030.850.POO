#include <iostream>
using namespace std;

int main(){
    double x = 1, y = 0, z;
    try{
        if(y==0){
            throw "Division por cero no valida";
        }
        z=x/y;
        cout<<"El valor de z es: "<<z<<endl;
    }catch(const char *msg){
        cout<<"Mensaje: "<<msg<<endl;
    }
}