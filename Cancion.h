#ifndef CANCION_H
#define CANCION_H
#include <string>

using namespace std;

class Cancion {
private:
    string nombre;
    string artista;
    int anoLanzamiento;
    string genero;
    string duracion;  // MM:SS

public:
    Cancion(const string& nom = "", const string& art = "", int ano = 0, const string& gen = "", const string& dur = "");
    string getNombre() const;
    string getArtista() const;
    int getAnoLanzamiento() const;
    string getGenero() const;
    string getDuracion() const;

    void setNombre(const string& nom);
    void setArtista(const string& art);
    void setAnoLanzamiento(int ano);
    void setGenero(const string& gen);
    void setDuracion(const string& dur);
};

#endif // CANCION_H
