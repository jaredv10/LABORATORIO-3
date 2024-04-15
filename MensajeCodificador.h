#ifndef MENSAJECODIFICADOR_H
#define MENSAJECODIFICADOR_H
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class MensajeCodificador
{
public:
    MensajeCodificador();
    void procesarMensaje(const string& archivoEntrada, const string& archivoDestino, int desplazamiento, bool esCodificacion);
   };


#endif // MENSAJECODIFICADOR_H
