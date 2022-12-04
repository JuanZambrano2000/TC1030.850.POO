#include <iostream>
using namespace std;

int main(){
    int arr[10];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        arr[i] = i+1;
    }
    try{
        for(int i=0;i<11;i++){
            if(i>9){
                throw 1;
            }
            cout<<arr[i]<<endl;
        }

    }catch(int n){
        if(n == 1){
            cout<<"Indice fuera de rango"<<endl;
        }
    }
}