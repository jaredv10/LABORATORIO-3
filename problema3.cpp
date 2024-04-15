#include <iostream>
#include "Buscartexto.h"

using namespace std;

int problema3() {
    Buscartexto buscador;
    string archivoEntrada, archivoSalida, busqueda;

    cout << "Ingrese la secuencia a buscar: ";
    getline(cin, busqueda);

    cout << "Ingrese el nombre del archivo de entrada: ";
    getline(cin, archivoEntrada);

    cout << "Ingrese el nombre del archivo de salida: ";
    getline(cin, archivoSalida);

    buscador.buscarYContar(archivoEntrada, busqueda, archivoSalida);

    cout << "Proceso completado. Los resultados se han escrito en " << archivoSalida << ".\n";

    return 0;
}
