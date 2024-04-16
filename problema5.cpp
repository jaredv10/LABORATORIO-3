#include <iostream>
#include <fstream>
#include "pelicula.h"

using namespace std;

#define MAX_PELICULAS 100

Pelicula peliculas[MAX_PELICULAS]; // Arreglo de películas
int numPeliculas = 0; // Número de películas en el arreglo

void ingresarPelicula() {
    string nombre, director, genero;
    int anio, horas, minutos, segundos;
    cout << "Ingrese el nombre de la película: ";
    cin >> nombre;
    cout << "Ingrese el director: ";
    cin >> director;
    cout << "Ingrese el año de lanzamiento: ";
    cin >> anio;
    cout << "Ingrese el género: ";
    cin >> genero;
    cout << "Ingrese la duración (horas, minutos y segundos): ";
    cin >> horas >> minutos >> segundos;
    Duracion duracion(horas, minutos, segundos);
    Pelicula pelicula(nombre, director, anio, genero, duracion);
    peliculas[numPeliculas] = pelicula;
    numPeliculas++;
}

void eliminarPelicula() {
    string nombre;
    cout << "Ingrese el nombre de la película a eliminar: ";
    cin >> nombre;
    for (int i = 0; i < numPeliculas; i++) {
        if (peliculas[i].getNombre() == nombre) {
            for (int j = i; j < numPeliculas - 1; j++) {
                peliculas[j] = peliculas[j + 1];
            }
            numPeliculas--;
            break;
        }
    }
}

void ordenarPeliculas() {
    for (int i = 0; i < numPeliculas - 1; i++) {
        for (int j = 0; j < numPeliculas - i - 1; j++) {
            if (peliculas[j].getNombre() > peliculas[j + 1].getNombre()) {
                // Intercambiar peliculas[j] y peliculas[j + 1]
                Pelicula temp = peliculas[j];
                peliculas[j] = peliculas[j + 1];
                peliculas[j + 1] = temp;
            }
        }
    }
    cout << "Películas ordenadas exitosamente!\n";
}

void modificarPelicula() {
    string nombre;
    cout << "Ingrese el nombre de la película a modificar: ";
    cin >> nombre;
    for (int i = 0; i < numPeliculas; i++) {
        if (peliculas[i].getNombre() == nombre) {
            string nuevoNombre, director, genero;
            int anio, horas, minutos, segundos;
            cout << "Ingrese el nuevo nombre de la película: ";
            cin >> nuevoNombre;
            peliculas[i].setNombre(nuevoNombre);
            cout << "Ingrese el nuevo director de la película: ";
            cin >> director;
            peliculas[i].setDirector(director);
            cout << "Ingrese el nuevo año de lanzamiento de la película: ";
            cin >> anio;
            peliculas[i].setAnioLanzamiento(anio);
            cout << "Ingrese el nuevo género de la película: ";
            cin >> genero;
            peliculas[i].setGenero(genero);
            cout << "Ingrese la nueva duración de la película (horas, minutos, segundos): ";
            cin >> horas >> minutos >> segundos;
            Duracion duracion(horas, minutos, segundos);
            peliculas[i].setDuracion(duracion);
            break;
        }
    }
}


void imprimirPeliculas() {
    for (int i = 0; i < numPeliculas; i++) {
        cout << "Nombre: " << peliculas[i].getNombre() << endl;
        cout << "Director: " << peliculas[i].getDirector() << endl;
        cout << "Año de Lanzamiento: " << peliculas[i].getAnioLanzamiento() << endl;
        cout << "Genero: " << peliculas[i].getGenero() << endl;
        cout << "Duración: " << peliculas[i].getDuracion().getHoras() << ":" << peliculas[i].getDuracion().getMinutos() << ":" << peliculas[i].getDuracion().getSegundos() << std::endl;
    }
}

void guardarPeliculasEnArchivo() {
    std::ofstream archivo("peliculas.txt");
    for (int i = 0; i < numPeliculas; i++) {
        archivo << peliculas[i].getNombre() << "\n";
        archivo << peliculas[i].getDirector() << "\n";
        archivo << peliculas[i].getAnioLanzamiento() << "\n";
        archivo << peliculas[i].getGenero() << "\n";
        archivo << peliculas[i].getDuracion().getHoras() << "\n";
        archivo << peliculas[i].getDuracion().getMinutos() << "\n";
        archivo << peliculas[i].getDuracion().getSegundos() << "\n";
    }
    archivo.close();
}

void cargarPeliculasDeArchivo() {
    ifstream archivo("peliculas.txt");
    string nombre, director, genero;
    int anio, horas, minutos, segundos;
    while (getline(archivo, nombre)) {
        getline(archivo, director);
        archivo >> anio;
        archivo.ignore();
        getline(archivo, genero);
        archivo >> horas;
        archivo.ignore();
        archivo >> minutos;
        archivo.ignore();
        archivo >> segundos;
        archivo.ignore();
        Duracion duracion(horas, minutos, segundos);
        Pelicula pelicula(nombre, director, anio, genero, duracion);
        peliculas[numPeliculas] = pelicula;
        numPeliculas++;
    }
    archivo.close();
}

int problema5() {
    // Menú principal
    int opcion;
    do {
        cout << "\nMENU PRINCIPAL\n";
        cout << "1. Ingresar nueva película\n";
        cout << "2. Eliminar película\n";
        cout << "3. Ordenar películas\n";
        cout << "4. Modificar película\n";
        cout << "5. Imprimir lista de películas\n";
        cout << "6. Guardar películas en archivo\n";
        cout << "7. Cargar películas de archivo\n";
        cout << "8. Salir\n";
        cout << "Su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: // Ingresar nueva película
                ingresarPelicula();
                break;
            case 2: // Eliminar película
                eliminarPelicula();
                break;
            case 3: // Ordenar películas
                ordenarPeliculas();
                break;
            case 4: // Modificar pelicula
                modificarPelicula();
                break;
            case 5: // Imprimir lista de películas
                imprimirPeliculas();
                break;
            case 6: // Guardar peliculas en archivo
                guardarPeliculasEnArchivo();
                break;
            case 7: // Cargar películas de archivo
                cargarPeliculasDeArchivo();
                break;
            case 8: // Salir
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción no valida. Intente nuevamente.\n";
        }
    } while (opcion != 8);

    return 0;
}


