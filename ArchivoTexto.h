#ifndef ARCHIVOTEXTO_H
#define ARCHIVOTEXTO_H
#include <string>

using namespace std;

class ArchivoTexto
{


public:
    ArchivoTexto();
    void escribir(string ubicacion);
    void leer(string ubicacion);
};

#endif // ARCHIVOTEXTO_H
