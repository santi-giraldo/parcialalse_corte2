cmake_minimum_required(VERSION 3.10)
project(ProyectoSensor)

include_directories(include)

add_executable(app sensor/main.cpp /Sensor.cpp)
