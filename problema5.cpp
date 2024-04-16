#include <iostream>
#include <fstream>
#include "pelicula.h"

#define MAX_PELICULAS 100

Pelicula peliculas[MAX_PELICULAS]; // Arreglo de películas
int numPeliculas = 0; // Número de películas en el arreglo

void ingresarPelicula() {
    std::string nombre, director, genero;
    int anio, horas, minutos, segundos;
    std::cout << "Ingrese el nombre de la película: ";
    std::cin >> nombre;
    std::cout << "Ingrese el director: ";
    std::cin >> director;
    std::cout << "Ingrese el año de lanzamiento: ";
    std::cin >> anio;
    std::cout << "Ingrese el género: ";
    std::cin >> genero;
    std::cout << "Ingrese la duración (horas, minutos y segundos): ";
    std::cin >> horas >> minutos >> segundos;
    Duracion duracion(horas, minutos, segundos);
    Pelicula pelicula(nombre, director, anio, genero, duracion);
    peliculas[numPeliculas] = pelicula;
    numPeliculas++;
}

void eliminarPelicula() {
    std::string nombre;
    std::cout << "Ingrese el nombre de la película a eliminar: ";
    std::cin >> nombre;
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
    std::cout << "Películas ordenadas exitosamente!\n";
}

void modificarPelicula() {
    std::string nombre;
    std::cout << "Ingrese el nombre de la película a modificar: ";
    std::cin >> nombre;
    for (int i = 0; i < numPeliculas; i++) {
        if (peliculas[i].getNombre() == nombre) {
            std::string nuevoNombre, director, genero;
            int anio, horas, minutos, segundos;
            std::cout << "Ingrese el nuevo nombre de la película: ";
            std::cin >> nuevoNombre;
            peliculas[i].setNombre(nuevoNombre);
            std::cout << "Ingrese el nuevo director de la película: ";
            std::cin >> director;
            peliculas[i].setDirector(director);
            std::cout << "Ingrese el nuevo año de lanzamiento de la película: ";
            std::cin >> anio;
            peliculas[i].setAnioLanzamiento(anio);
            std::cout << "Ingrese el nuevo género de la película: ";
            std::cin >> genero;
            peliculas[i].setGenero(genero);
            std::cout << "Ingrese la nueva duración de la película (horas, minutos, segundos): ";
            std::cin >> horas >> minutos >> segundos;
            Duracion duracion(horas, minutos, segundos);
            peliculas[i].setDuracion(duracion);
            break;
        }
    }
}


void imprimirPeliculas() {
    for (int i = 0; i < numPeliculas; i++) {
        std::cout << "Nombre: " << peliculas[i].getNombre() << std::endl;
        std::cout << "Director: " << peliculas[i].getDirector() << std::endl;
        std::cout << "Año de Lanzamiento: " << peliculas[i].getAnioLanzamiento() << std::endl;
        std::cout << "Genero: " << peliculas[i].getGenero() << std::endl;
        std::cout << "Duración: " << peliculas[i].getDuracion().getHoras() << ":" << peliculas[i].getDuracion().getMinutos() << ":" << peliculas[i].getDuracion().getSegundos() << std::endl;
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
    std::ifstream archivo("peliculas.txt");
    std::string nombre, director, genero;
    int anio, horas, minutos, segundos;
    while (std::getline(archivo, nombre)) {
        std::getline(archivo, director);
        archivo >> anio;
        archivo.ignore();
        std::getline(archivo, genero);
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
        std::cout << "\nMENU PRINCIPAL\n";
        std::cout << "1. Ingresar nueva película\n";
        std::cout << "2. Eliminar película\n";
        std::cout << "3. Ordenar películas\n";
        std::cout << "4. Modificar película\n";
        std::cout << "5. Imprimir lista de películas\n";
        std::cout << "6. Guardar películas en archivo\n";
        std::cout << "7. Cargar películas de archivo\n";
        std::cout << "8. Salir\n";
        std::cout << "Su opción: ";
        std::cin >> opcion;

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
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción no valida. Intente nuevamente.\n";
        }
    } while (opcion != 8);

    return 0;
}

