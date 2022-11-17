#include <iostream>
using namespace std;
class Deportista{
    public:
        Deportista(string, int);
        //Nos lleva al metodo de las clases heredadas
        //Sin esto nos imprimiria el mostrar de la clase padre
        virtual void mostrar();
    private:
        string nombre;
        int edad;
};
Deportista::Deportista(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}; 
void Deportista::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
};
//.....................................................................
class Tenista:public Deportista{
    public:
        Tenista(string, int, int);
        void mostrar();
    private:
    int raqueta;
};
Tenista::Tenista(string _nombre, int _edad, int _raqueta):Deportista(_nombre,_edad){
    raqueta = _raqueta;
};
void Tenista::mostrar(){
    Deportista::mostrar();
    cout<<"Raqueta: "<<raqueta<<endl;
};
class Entrenador: public Deportista{
    public: 
        Entrenador(string, int, string);
        void mostrar();
    private:
        string disciplina;
};
Entrenador::Entrenador(string _nombre, int _edad, string _disciplina):Deportista(_nombre,_edad){
    disciplina = _disciplina;
};
void Entrenador::mostrar(){
    Deportista::mostrar();
    cout<<"Deporte: "<<disciplina<<endl;
};
int main(){
    //Creamos un arreglo de dos elementos, con un apuntador a la clase deportista
    Deportista *vector[2];
    vector[0] = new Tenista("Filemon",55,4);
    vector[1] = new Entrenador("Laura", 25,"Box");
    vector[0]->mostrar();
    cout<<"\n";
    vector[1]->mostrar();
}