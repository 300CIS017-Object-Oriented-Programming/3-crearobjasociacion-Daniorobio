//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

Propietario::Propietario(std::string docIdentidad) {
    this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::setEdad(int edad) {
    this->edad = edad;
}

void Propietario::mostrarInfo() {
    std::cout << "nombre: " << nombre << std::endl;
    std::cout << "documento: " << docIdentidad << std::endl;
    std::cout << "edad: " << edad << std::endl;
}

int Propietario::getEdad() {
    return edad;
}

std::string Propietario::getDocIdentidad() {
    return docIdentidad;
}