#include <iostream>
using namespace std;

int main(){
    //Codigo previo
    try{ //Todo el codigo a ejecutar y que puede ser propenso a errores
        //codigo
        throw 100;
        //codigo
    }
    catch(int n){
        cout<<"Error numero "<<n<<endl;
    }
}