#include <iostream> 
using namespace std;
class Video{
    public:
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion);
        Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion);
        void calificaVideo(int _calificacion);
        void muestraDatos();
    private:
        string tipoVideo;
        string nombreVideo;
        string genero;
        int calificacion;
        int anioLanzamiento;
        int duracion;
};