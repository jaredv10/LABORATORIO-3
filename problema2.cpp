#include "ArchivoTexto.h"
#include <iostream>
#include<fstream>
using namespace std;


#include "ArchivoTexto.h"
#include <iostream>

int problema2() {
    ArchivoTexto archivo;
    std::string ruta;
    char opcion;

    do {
        std::cout << "Ingrese 'r' para leer un archivo, 'w' para escribir en un archivo, 'q' para salir: ";
        std::cin >> opcion;
        std::cin.ignore();

        if (opcion == 'w' || opcion == 'W') {
            std::cout << "Ingrese la ruta del archivo donde desea escribir: ";
            std::getline(std::cin, ruta);
            archivo.escribir(ruta);
        } else if (opcion == 'r' || opcion == 'R') {
            std::cout << "Ingrese la ruta del archivo que desea leer: ";
            std::getline(std::cin, ruta);
            archivo.leer(ruta);
        } else if (opcion == 'q' || opcion == 'Q') {
            std::cout << "Saliendo del programa.\n";
        } else {
            std::cout << "Opción no válida.\n";
        }
    } while (opcion != 'q' && opcion != 'Q');

    return 0;
}
