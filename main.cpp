#include <iostream>
#include <fstream>
#include "problemas.h"

using namespace std;

int main()
{
    cout<< "Menu de ejercicios " << endl;
    cout<< "Ejercicio 1 "<< endl;
    cout<< "Ejercicio 2 "<< endl;
    cout<< "Ejercicio 3 "<< endl;
    cout<< "Ejercicio 4 "<< endl;
    cout<< "Ejercicio 5 "<< endl;
    cout<< "Seleccione una opcion"<< endl;
    int opcion = 0;
    cin>> opcion;
    switch (opcion){

    case 1:
        problema1();
        break;
    default:
        cout << "opción no disponible"<< endl;
        break;


    }
    return 0;
}


