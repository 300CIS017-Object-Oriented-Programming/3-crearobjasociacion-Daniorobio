//
// Created by danio on 11/02/2024.
//

#include "Veterinario.h"

Veterinario::Veterinario() {
    this->nombre = "";
    this->aniosExperiencia = 0;
}

Veterinario::Veterinario(std::string nombre, int aniosExperiencia) {
    this->nombre = nombre;
    this->aniosExperiencia = aniosExperiencia;
}

void Veterinario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

string Veterinario::getNombre() {
    return nombre;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia) {
    this->aniosExperiencia = aniosExperiencia;
}

int Veterinario::getAniosExperiencia() {
    return aniosExperiencia;
}

void Veterinario::mostrarInfo() {
    std::cout << "nombre: " << nombre << std::endl;
    std::cout << "anios de experiencia: " << aniosExperiencia << std::endl;
}
