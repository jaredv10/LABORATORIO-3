#ifndef BUSCARTEXTO_H
#define BUSCARTEXTO_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Buscartexto
{
public:
    Buscartexto();
    void buscarYContar(const string& archivoEntrada, const string& busqueda, const string& archivoSalida);
};

#endif // BUSCARTEXTO_H
