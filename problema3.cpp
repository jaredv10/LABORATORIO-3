#include <iostream>
#include "Buscartexto.h"

using namespace std;

int problema3() {
    Buscartexto buscador;
    string archivoEntrada, archivoSalida, busqueda;
    char opcion;

    do {
        cout << "\n** MENÚ DE BUSCADOR DE TEXTO **" << endl;
        cout << "1. Buscar y contar en un archivo" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == '1') {
            cout << "Ingrese la secuencia a buscar: ";
            getline(cin, busqueda);

            cout << "Ingrese el nombre del archivo de entrada: ";
            getline(cin, archivoEntrada);

            cout << "Ingrese el nombre del archivo de salida: ";
            getline(cin, archivoSalida);

            buscador.buscarYContar(archivoEntrada, busqueda, archivoSalida);

            cout << "Proceso completado. Los resultados se han escrito en " << archivoSalida << ".\n";
        } else if (opcion == '2') {
            cout << "Saliendo del programa.\n";
        } else {
            cout << "Opción no válida.\n";
        }
    } while (opcion != '2');

    return 0;
}
