#include <iostream>
#include <vector>
#include "Sensor.h"

using namespace std;

int main() {
    vector<Sensor> redSensores;
    cout << "--- Sistema de Registro de Sensores ---\n";
    Sensor s1("SENS-01", "Temperatura");
    Sensor s2("SENS-02", "Humedad");
    redSensores.push_back(s1);
    redSensores.push_back(s2);
    for (int i = 0; i < redSensores.size(); i++) {
        float dato;
        cout << "Ingrese el valor para el sensor " << redSensores[i].getId() << ": ";
        cin >> dato;
        redSensores[i].actualizarValor(dato);
    }
    cout << "\n--- Resultados del Monitoreo ---\n";
    for (int i = 0; i < redSensores.size(); i++) {
        redSensores[i].mostrarInfo();
    }
    return 0;
}
