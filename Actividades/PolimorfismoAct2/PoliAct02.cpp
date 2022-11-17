#include <iostream>
using namespace std;
class Figura{
    public:
        void obtener(float largo,float alto);
        virtual float area();
    protected:
        float largo;
        float alto;
};
class Rectangulo:public Figura{
    public:
        float area();
};
class Triangulo:public Figura{
    public:
        float area();    
};
void Figura::obtener(float largo,float alto){
    this->alto=alto;
    this->largo=largo;
};
float Figura::area(){
    return 0;
};
float Rectangulo::area(){
    return alto*largo;
};
float Triangulo::area(){
    return alto*largo/2;
};
int main(){
    Figura *rectangulo = new Rectangulo;
    Figura *triangulo = new Triangulo; 
    rectangulo->obtener(4,5);
    triangulo->obtener(4,5);
    cout<<"Valor del area del rectangulo: "<<rectangulo->area()<<endl;
    cout<<"Valor del area del Triangulo: "<<triangulo->area()<<endl;
};