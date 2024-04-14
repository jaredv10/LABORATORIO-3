#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include <string>

using namespace std;


class CuentaCorriente
{

private:
    string nombre;
       string apellidos;
       string direccion;
       string telefono;
       double saldo;


public:
       // Constructores
          CuentaCorriente();
          CuentaCorriente(string nombre, string apellidos, string direccion, string telefono, double saldo);

          // Métodos get y set
          void setNombre(string nombre);
          string getNombre();

          void setApellidos(string apellidos);
          string getApellidos();

          void setDireccion(string direccion);
          string getDireccion();

          void setTelefono(string telefono);
          string getTelefono();

          void setSaldo(double saldo);
          double getSaldo();

          // Métodos para interactuar con el saldo
          void retirarDinero(double cantidad);
          void ingresarDinero(double cantidad);

          // Método para visualizar los datos de la cuenta
          void consultarCuenta();

          // Método para verificar si la cuenta está en números rojos
          bool saldoNegativo();
      };

#endif // CUENTACORRIENTE_H
