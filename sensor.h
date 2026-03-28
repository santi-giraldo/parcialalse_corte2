#ifndef SENSOR_H
#define SENSOR_H

#include <string>

using namespace std;
/**
 * @class Sensor
 * @brief Clase que representa un sensor de monitoreo.
 */
class Sensor {
private:
    string id;
    string tipo;
    float valor;

public:
    /**
     * @brief Constructor de la clase.
     * @param id Identificador unico del sensor.
     * @param tipo Magnitud que mide (ej. Temperatura, Humedad).
     */
    Sensor(string id, string tipo);

    /**
     * @brief Actualiza el dato registrado por el sensor.
     * @param nuevoValor El nuevo valor ingresado por el usuario.
     */
    void actualizarValor(float nuevoValor);

    /**
     * @brief Imprime la informacion actual en consola.
     */
    void mostrarInfo() const;

    /**
     * @brief Obtiene el ID del sensor.
     * @return El ID en formato string.
     */
    string getId() const;
};

#endif
