#include <iostream>
using namespace std;

class Componentes{
    public:
        int x;
        int y;
        Componentes(int x, int y){
            this->x = x;
            this->y = y;
        };

        Componentes operator + (Componentes &ps){
            //Componentes n_ps;
            this->x = this->x + ps.x;
            this->y = this->y + ps.y;
            return Componentes(this->x,this->y);

        }
};

int main(){

    Componentes ps1(10,20), ps2(5,40);
    Componentes ps3 =ps1 + ps2;
    cout<<endl;
    cout<<"ps3 -> x :" << ps3.x<< "         ps3 ->y :"<<ps3.y<<endl;;
}
