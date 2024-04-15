#include "ArchivoTexto.h"
#include <iostream>
#include<fstream>
using namespace std;


#include "ArchivoTexto.h"
#include <iostream>

int problema2() {
    ArchivoTexto archivo;
    string ruta;
    char opcion;

    do {
        cout << "Ingrese 'r' para leer un archivo, 'w' para escribir en un archivo, 'q' para salir: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 'w' || opcion == 'W') {
            cout << "Ingrese la ruta del archivo donde desea escribir: ";
            getline(cin, ruta);
            archivo.escribir(ruta);
        } else if (opcion == 'r' || opcion == 'R') {
            cout << "Ingrese la ruta del archivo que desea leer: ";
            getline(cin, ruta);
            archivo.leer(ruta);
        } else if (opcion == 'q' || opcion == 'Q') {
            cout << "Saliendo del programa.\n";
        } else {
            cout << "Opción no valida.\n";
        }
    } while (opcion != 'q' && opcion != 'Q');

    return 0;
}
