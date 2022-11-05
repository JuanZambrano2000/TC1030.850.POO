#include <iostream> //<son para librerias>
using namespace std;
class Libro{
    public:
        Libro(string _titulo, int _paginas, string _codigo);
        string imprimeTitulo();
        int imprimePaginas();
        string imprimeCodigo();
    private:
        string titulo;
        int paginas;
        string codigo;
};
//........................Definicion de metodos.........................
Libro::Libro(string _titulo, int _paginas, string _codigo){
    titulo = _titulo;
    paginas = _paginas;
    codigo = _codigo;
}
string Libro::imprimeCodigo(){
    return codigo;
};
string Libro::imprimeTitulo(){
    return titulo;
};
int Libro::imprimePaginas(){
    return paginas;
};
//........................Programa principal.........................
int main(){
    Libro MiLibro1("Algebra de Baldor" , 450 , "MAT3568");
    Libro MiLibro2("Matematicas 2" , 215 , "JPZ0910");
    cout << "Titulo: " << MiLibro1.imprimeTitulo() << endl;
    cout << "Paginas: " << MiLibro1.imprimePaginas() << endl;
    cout << "Codigo: " << MiLibro1.imprimeCodigo() << endl;
    cout << "Titulo: " << MiLibro2.imprimeTitulo() << endl;
    cout << "Paginas: " << MiLibro2.imprimePaginas() << endl;
    cout << "Codigo: " << MiLibro2.imprimeCodigo() << endl;
}