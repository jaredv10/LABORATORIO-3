#include <iostream>
#include <fstream>
#include "problemas.h"

using namespace std;

int main()
{
    cout<< "Seleccione la opcion que deseas ejercutar " << endl;
    cout<< "Ejercicio 1 "<< endl;
    cout<< "Ejercicio 2 "<< endl;
    cout<< "Ejercicio 3 "<< endl;
    cout<< "Ejercicio 4 "<< endl;
    cout<< "Ejercicio 5 "<< endl;
    cout<< "Seleccion: "<< endl;
    int opcion = 0;
    cin>> opcion;
    switch (opcion){

    case 1:
        problema1();
        break;
    default:
        cout << "opción no disponible"<< endl;
        break;
     case 2:
        problema2();
        break;
    case 3:
        problema3();
        break;
    case 4:
        problema4();
        break;
    case 5:
        problema5();
        break;
    default:
        cout << "opción no disponible"<< endl;
        break;


    }
    return 0;
}


