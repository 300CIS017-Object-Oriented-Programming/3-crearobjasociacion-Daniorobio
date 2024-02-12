//
// Created by danio on 11/02/2024.
//

#include "Raza.h"

Raza::Raza() {
    this->nombre = "";
    this->paisOrigen = "";
}

Raza::Raza(std::string nombre, string paisOrigen) {
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}

void Raza::setNombre(std::string nombre) {
    this->nombre = nombre;
}

string Raza::getNombre() {
    return nombre;
}

void Raza::setpaisOrigen(std::string paisOrigen) {
    this->paisOrigen = paisOrigen;
}

string Raza::getpaisOrigen() {
    return paisOrigen;
}