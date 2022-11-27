#include <iostream>
using namespace std;
class Caja{
    public:
        void pide(double _largo, double _ancho, double _alto){
            largo = _largo;
            ancho = _ancho;
            alto = _alto;
        }
        double volumen(){
            return largo*ancho*alto;
        }
        Caja operator + (Caja n_caja){
            Caja nueva_caja;
            nueva_caja.largo = largo +n_caja.largo;
            nueva_caja.ancho = ancho +n_caja.ancho;
            nueva_caja.alto = alto +n_caja.alto;
            return nueva_caja;
        };
        double largo, ancho, alto;
};
int main(){
    Caja chica, mediana, grande;
    Caja jumbo; //A partir de la sobre carga
    chica.pide(2,3,4);
    mediana.pide(5,6,7);
    grande.pide(8,9,10);
    jumbo = mediana + grande;
    cout<<"Largo caja jumbo: "<<jumbo.largo<<endl;
    cout<<"Ancho caja jumbo: "<<jumbo.ancho<<endl;
    cout<<"Alto caja jumbo: "<<jumbo.alto<<endl;
    cout<<"El volumen de la caja jumbo es: "<<jumbo.volumen()<<endl;
}