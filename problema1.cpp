
#include <iostream>
#include "CuentaCorriente.h"
using namespace std;

int problema1() {
    CuentaCorriente cuenta;
    int opcion;
    double cantidad;
    string dato;

    do {
        cout << "\n*** MENU ***\n";
        cout << "1. Crear cuenta\n";
        cout << "2. Depositar dinero\n";
        cout << "3. Retirar dinero\n";
        cout << "4. Consultar cuenta\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese el nombre: ";
            cin >> dato;
            cuenta.setNombre(dato);

            cout << "Ingrese los apellidos: ";
            cin >> dato;
            cuenta.setApellidos(dato);

            cout << "Ingrese la direccion: ";
            cin >> dato;
            cuenta.setDireccion(dato);

            cout << "Ingrese el telefono: ";
            cin >> dato;
            cuenta.setTelefono(dato);

            cout << "Ingrese el saldo inicial: ";
            cin >> cantidad;
            cuenta.setSaldo(cantidad);
            break;
        case 2:
            cout << "Ingrese la cantidad a depositar: ";
            cin >> cantidad;
            cuenta.ingresarDinero(cantidad);
            break;
        case 3:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> cantidad;
            cuenta.retirarDinero(cantidad);
            break;
        case 4:
            cuenta.consultarCuenta();
            break;
        case 5:
            cout << "Saliendo... Completado\n";
            break;
        default:
            cout << "Opcion invalida intentelo de nuevo.\n";
            break;
        }
    } while (opcion != 5);

    return 0;
}
