#include "Buscartexto.h"

Buscartexto::Buscartexto() {}

void Buscartexto::buscarYContar(const string& archivoEntrada, const string& busqueda, const string& archivoSalida) {
    int conteo = 0;

    ifstream entrada(archivoEntrada);
    string linea;
    while (getline(entrada, linea)) {
        size_t pos = 0;
        while ((pos = linea.find(busqueda, pos)) != string::npos) {
            ++conteo;
            pos += busqueda.size();
        }
    }
    entrada.close();

    ofstream salida(archivoSalida);
    salida << "La secuencia \"" << busqueda << "\" se repite " << conteo << " veces en el texto.\n";
    salida.close();
}
