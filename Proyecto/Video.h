#include <iostream> 
using namespace std;
class Video{
    public:
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion);
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
        void calificaVideo(int _calificacion);
        void muestraDatos();
    protected:
        string tipoVideo;
        string nombreVideo;
        string genero;
        int calificacion;
        int anioLanzamiento;
        int duracion;
};
class Pelicula:public Video{
    public: 
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion); 
        Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
        
};
class Serie:public Video{
    public:
        Serie(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion); 
        Serie(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
        
};
