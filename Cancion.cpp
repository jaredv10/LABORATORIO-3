#include "Cancion.h"

using namespace std;

Cancion::Cancion(const string& nom, const string& art, int ano, const string& gen, const string& dur)
    : nombre(nom), artista(art), anoLanzamiento(ano), genero(gen), duracion(dur) {}

string Cancion::getNombre() const { return nombre; }
string Cancion::getArtista() const { return artista; }
int Cancion::getAnoLanzamiento() const { return anoLanzamiento; }
string Cancion::getGenero() const { return genero; }
string Cancion::getDuracion() const { return duracion; }

void Cancion::setNombre(const string& nom) { nombre = nom; }
void Cancion::setArtista(const string& art) { artista = art; }
void Cancion::setAnoLanzamiento(int ano) { anoLanzamiento = ano; }
void Cancion::setGenero(const string& gen) { genero = gen; }
void Cancion::setDuracion(const string& dur) { duracion = dur; }
