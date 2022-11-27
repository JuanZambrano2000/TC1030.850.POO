#include <iostream>
using namespace std;
class Puntos{
    public:
        Puntos(int _x, int _y){
            x = _x;
            y = _y;
        };
        //Sobrecarga del operador +
        Puntos operator + (Puntos pts){
            Puntos new_puntos(0,0);
            new_puntos.x = x + pts.x;
            new_puntos.y = y + pts.y;
            return new_puntos;
        };
    //private:
        int x,y;
};
int main(){
    Puntos punto1(10,20); //x=10, y=20  
    Puntos punto2(5,50);
    Puntos punto3(0,0);
    punto3 = punto1+punto2;
    cout<<"Valor x punto 3: "<<punto3.x<<endl;
    cout<<"Valor y punto 3: "<<punto3.y<<endl;
}