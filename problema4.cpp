#include <iostream>
#include "MensajeCodificador.h"

using namespace std;

int problema4() {
    MensajeCodificador codificador;
    string archivoEntrada, archivoDestino;
    int opcion, desplazamiento;

    cout << "Ingrese la ubicacion del archivo origen a codificar o decodificar: ";
    getline(cin, archivoEntrada);

    cout << "Ingrese la ubicacion del archivo resultado codificado o decodificado: ";
    getline(cin, archivoDestino);

    cout << "Ingrese el desplazamiento para la codificacion/decodificacion: ";
    cin >> desplazamiento;

    cout << "Seleccione una opcion: \n1. Codificacion \n2. Decodificación \nOpcion: ";
    cin >> opcion;

    codificador.procesarMensaje(archivoEntrada, archivoDestino, desplazamiento, opcion == 1);

    cout << "Proceso completado. Los resultados se han escrito en " << archivoDestino << ".\n";

    return 0;
}
