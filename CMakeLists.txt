cmake_minimum_required(VERSION 3.10)
project(ProyectoSensor)

# Le decimos a CMake donde buscar los .h
include_directories(include)

# Generamos el ejecutable uniendo todo
add_executable(app src/main.cpp src/Sensor.cpp)
