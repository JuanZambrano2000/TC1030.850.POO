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
int Video::getCalificacion(){
    return calificacion;
}
void Video::muestraDatos(){
    if(calificacion<0 || calificacion>100){
        cout<<"Tipo de video: "<<tipoVideo<<endl;
        cout<<"Nombre del video: "<<nombreVideo<<endl;
        cout<<"Genero: "<<genero<<endl;
        cout<<"Anio Lanzamiento: "<<anioLanzamiento<<endl;
        cout<<"Duracion: "<<duracion<<endl;
    }else{
        cout<<"Tipo de video: "<<tipoVideo<<endl;
        cout<<"Nombre del video: "<<nombreVideo<<endl;
        cout<<"Genero: "<<genero<<endl;
        cout<<"Calificacion: "<<calificacion<<endl;
        cout<<"Anio Lanzamiento: "<<anioLanzamiento<<endl;
        cout<<"Duracion: "<<duracion<<endl;
    }
};
Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _nominaciones):Video( _tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){
    nominaciones = _nominaciones;
}; 
Pelicula::Pelicula(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _nominaciones):Video( _tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    nominaciones = _nominaciones;
};
void Pelicula::muestraDatos(){
    Video::muestraDatos();
    cout<<"Nominaciones: "<<nominaciones<<endl;
};
Serie::Serie(string _tipoVideo, string _nombreVideo, string _genero, int _anioLanzamiento, int _duracion, int _cantidadEpisodios):Video( _tipoVideo, _nombreVideo, _genero, _anioLanzamiento, _duracion){
    cantEpisodios = _cantidadEpisodios;
}; 
Serie::Serie(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _anioLanzamiento, int _duracion, int _cantidadEpisodios):Video( _tipoVideo, _nombreVideo, _genero, _calificacion, _anioLanzamiento, _duracion){
    cantEpisodios = _cantidadEpisodios;
};
void Serie::muestraDatos(){
    Video::muestraDatos();
    cout<<"Cantidad de episodios: "<<cantEpisodios<<endl;
};