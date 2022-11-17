#include <iostream> 
using namespace std;
#include "Video.h"
Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
};
Video::Video(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    anioLanzamiento = _anioLanzamiento;
    duracion = _duracion;
};
void Video::calificaVideo(int _calificacion){
    calificacion = _calificacion;
};
void Video::muestraDatos(){
    cout<<"Tipo de video: "<<tipoVideo<<endl;
    cout<<"Nombre del video: "<<nombreVideo<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Calificacion: "<<calificacion<<endl;
    cout<<"Anio Lanzamiento: "<<anioLanzamiento<<endl;
    cout<<"Duracion: "<<duracion<<endl;
    cout<<endl;
};
Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion):Video( _tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){}; 
Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion):Video( _tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){};
Serie::Serie(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion):Video( _tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){}; 
Serie::Serie(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion):Video( _tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){};