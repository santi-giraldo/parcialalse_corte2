# PARCIAL SEGUNDO CORTE
ENZO DIAZ - SANTIAGO GIRALDO

Se implementó una clase "Sensor" separada en archivos ".h" y ".cpp". En el programa principal, los objetos se almacenan usando un contenedor de la STL, donde se le solicitan y validan los datos al usuario. Todo está organizado con CMake y documentado con Doxygen.

# Instrucciones de Compilación
En la terminal de Ubuntu se ejecutan estos comandos en orden:

mkdir build
cd build
cmake ..
make
./app

# Ejemplo de Ejecución
--- Sistema de Registro de Sensores ---
Ingrese el valor para el sensor SENS-01: 25.5
Ingrese el valor para el sensor SENS-02: 60.2

Sensor ID: SENS-01 | Tipo: Temperatura | Valor actual: 25.5
Sensor ID: SENS-02 | Tipo: Humedad | Valor actual: 60.2

