#include <iostream>
using namespace std;
class Bebidas{
    public:
        Bebidas(string _sabor, int _mililitros);
        virtual void mostrar();
    private:
        string sabor;
        int mililitros;
};
Bebidas::Bebidas(string _sabor, int _mililitros){
    sabor = _sabor;
    mililitros = _mililitros;
};
void Bebidas::mostrar(){
    cout<<"Sabor: "<<sabor<<endl;
    cout<<"Contenido (ml): "<<mililitros<<endl;
};
class Gaseosa:public Bebidas{
    public:
        Gaseosa(string _sabor, int _mililitros, int _calorias);
        void mostrar();
    private:
        int calorias;
};
Gaseosa::Gaseosa(string _sabor, int _mililitros, int _calorias):Bebidas(_sabor, _mililitros){
    calorias = _calorias;
};
void Gaseosa::mostrar(){
    Bebidas::mostrar();
    cout<<"Calorias: "<<calorias<<endl;
}
int main(){
    Bebidas *ptrGaseosas[2];
    ptrGaseosas[0] = new Gaseosa("Coca",1000,450);
    ptrGaseosas[1] = new Gaseosa("Pepsi",355,120);
    ptrGaseosas[0]->mostrar();
    cout<<endl;
    ptrGaseosas[1]->mostrar();
}