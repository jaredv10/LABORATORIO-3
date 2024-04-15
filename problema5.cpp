#include <iostream>
#include "Cancion.h"

#define MAX_CANCIONES 100

using namespace std;

int problema5() {
    Cancion biblioteca[MAX_CANCIONES];
    int numCanciones = 0;

    //interaccion del usuario
    int opcion;
    do {
        cout << "1. Agregar cancion\n";
        cout << "2. Eliminar cancion\n";
        cout << "3. Mostrar canciones\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            if (numCanciones < MAX_CANCIONES) {
                string nombre, artista, genero, duracion;
                int anoLanzamiento;
                cout << "Ingrese el nombre de la cancion: ";
                getline(cin, nombre);
                cout << "Ingrese el nombre del artista: ";
                getline(cin, artista);
                cout << "Ingrese el año de lanzamiento: ";
                cin >> anoLanzamiento;
                cin.ignore();
                cout << "Ingrese el genero: ";
                getline(cin, genero);
                cout << "Ingrese la duracion (MM:SS): ";
                getline(cin, duracion);
                biblioteca[numCanciones++] = Cancion(nombre, artista, anoLanzamiento, genero, duracion);
            } else {
                cout << "La biblioteca esta llena.\n";
            }
        } else if (opcion == 2) {
            int indice;
            cout << "Ingrese el indice de la cancion a eliminar: ";
            cin >> indice;
            if (indice >= 0 && indice < numCanciones) {
                for (int i = indice; i < numCanciones - 1; ++i) {
                    biblioteca[i] = biblioteca[i + 1];
                }
                --numCanciones;
            } else {
                cout << "indice invalido.\n";
            }
        } else if (opcion == 3) {
            for (int i = 0; i < numCanciones; ++i) {
                cout << "Cancion " << i + 1 << ":\n";
                cout << "Nombre: " << biblioteca[i].getNombre() << "\n";
                cout << "Artista: " << biblioteca[i].getArtista() << "\n";
                cout << "Año de lanzamiento: " << biblioteca[i].getAnoLanzamiento() << "\n";
                cout << "Genero: " << biblioteca[i].getGenero() << "\n";
                cout << "Duracion: " << biblioteca[i].getDuracion() << "\n";
            }
        }
    } while (opcion != 4);

    return 0;
}
