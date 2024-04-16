#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
#include <string>



class Duracion {
private:
    int horas;
    int minutos;
    int segundos;
public:
    Duracion(int h = 0, int m = 0, int s = 0);
    int getHoras();
    int getMinutos();
    int getSegundos();
    void setHoras(int h);
    void setMinutos(int m);
    void setSegundos(int s);
};

class Pelicula {
private:
    std::string nombre;
    std::string director;
    int anioLanzamiento;
    std::string genero;
    Duracion duracion;
public:
    Pelicula(std::string n = "", std::string d = "", int a = 0, std::string g = "", Duracion dur = Duracion());
    std::string getNombre();
    std::string getDirector();
    int getAnioLanzamiento();
    std::string getGenero();
    Duracion getDuracion();
    void setNombre(std::string n);
    void setDirector(std::string d);
    void setAnioLanzamiento(int a);
    void setGenero(std::string g);
    void setDuracion(Duracion dur);
};



#endif // PELICULA_H
