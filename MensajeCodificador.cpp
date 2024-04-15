#include "MensajeCodificador.h"

MensajeCodificador::MensajeCodificador() {}

void MensajeCodificador::procesarMensaje(const string& archivoEntrada, const string& archivoDestino, int desplazamiento, bool esCodificacion) {
    ifstream entrada(archivoEntrada);
    ofstream salida(archivoDestino);

    char c;
    while (entrada.get(c)) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            salida << static_cast<char>((c - base + (esCodificacion ? desplazamiento : -desplazamiento) + 26) % 26 + base);
        } else {
            salida << c;
        }
    }

    entrada.close();
    salida.close();
}

