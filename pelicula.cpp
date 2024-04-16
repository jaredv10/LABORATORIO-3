#include <iostream>
#include <string>
#include "pelicula.h"

Duracion::Duracion(int h, int m, int s) : horas(h), minutos(m), segundos(s) {}

int Duracion::getHoras() { return horas; }
int Duracion::getMinutos() { return minutos; }
int Duracion::getSegundos() { return segundos; }
void Duracion::setHoras(int h) { horas = h; }
void Duracion::setMinutos(int m) { minutos = m; }
void Duracion::setSegundos(int s) { segundos = s; }

Pelicula::Pelicula(std::string n, std::string d, int a, std::string g, Duracion dur)
    : nombre(n), director(d), anioLanzamiento(a), genero(g), duracion(dur) {}

std::string Pelicula::getNombre() { return nombre; }
std::string Pelicula::getDirector() { return director; }
int Pelicula::getAnioLanzamiento() { return anioLanzamiento; }
std::string Pelicula::getGenero() { return genero; }
Duracion Pelicula::getDuracion() { return duracion; }

void Pelicula::setNombre(std::string n) { nombre = n; }
void Pelicula::setDirector(std::string d) { director = d; }
void Pelicula::setAnioLanzamiento(int a) { anioLanzamiento = a; }
void Pelicula::setGenero(std::string g) { genero = g; }
void Pelicula::setDuracion(Duracion dur) { duracion = dur; }

