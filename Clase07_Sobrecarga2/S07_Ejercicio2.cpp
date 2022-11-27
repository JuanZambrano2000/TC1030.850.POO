#include <iostream>
using namespace std;

class Componentes{
    public:
        int x=10;
        int y=30;

        Componentes operator + (Componentes ps){
            Componentes n_ps;
            n_ps.x = this->x + ps.x;
            n_ps.y = this->y + ps.y;
            return n_ps;

        }
};

int main(){

    Componentes ps1, ps2;
    Componentes ps3 =ps1 + ps2;
    cout<<endl;
    cout<<"ps3 -> x :" << ps3.x<< "         ps3 ->y :"<<ps3.y<<endl;;
}
