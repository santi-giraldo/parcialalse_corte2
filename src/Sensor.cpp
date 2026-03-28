#include "../include/Sensor.h"
#include <iostream>

using namespace std;

Sensor::Sensor(string id, string tipo) {
    this->id = id;
    this->tipo = tipo;
    this->valor = 0.0f; 
}
void Sensor::actualizarValor(float nuevoValor) {
    if(nuevoValor >= 0) {
        valor = nuevoValor;
    } else {
        cout << "Error: El sensor " << id << " no admite datos negativos.\n";
    }
}
void Sensor::mostrarInfo() const {
    cout << "Sensor ID: " << id << " | Tipo: " << tipo 
         << " | Valor actual: " << valor << endl;
}
string Sensor::getId() const {
    return id;
}
