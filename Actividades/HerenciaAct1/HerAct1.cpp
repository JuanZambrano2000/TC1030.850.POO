#include <iostream>
using namespace std;
//Clases
class Persona{
    public:
        Persona(string _nombre, int _edad);
        void setEdad(int _edad);
        int getEdad();
        void setNombre(string _nombre);
        string getNombre();
        void imprimeDatos();
    protected:
        string nombre;
        int edad;
};
class Empleado:public Persona{
    public:
        Empleado(string _nombre, int _edad): Persona(_nombre,_edad){};
        void setSueldo(float _sueldo);
        float getSueldo();
    private:
        float sueldo;
};
//Metodos clase persona
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
};
void Persona::setEdad(int _edad){
    edad = edad;
};
int Persona::getEdad(){
    return edad;
};
void Persona::setNombre(string _nombre){
    nombre = _nombre;
};
string  Persona::getNombre(){
    return nombre;
};
void Persona::imprimeDatos(){
    cout<<"Nombre: "<<nombre<<", edad:"<<edad<<endl;
}
//Metodos clase empleado
void Empleado::setSueldo(float _sueldo){
    sueldo = _sueldo;
};
float Empleado::getSueldo(){
    return sueldo;
};
int main(){
    Persona per01("Jose Hernandez",33);
    per01.imprimeDatos();
    Empleado per02("Manuel Martinez",40);
    per02.imprimeDatos();
    per02.setSueldo(20000);
    cout<<"Sueldo: "<<per02.getSueldo()<<endl;
}