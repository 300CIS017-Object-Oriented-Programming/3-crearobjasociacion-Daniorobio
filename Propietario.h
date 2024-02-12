//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <string>
#include <iostream>

class Propietario {
private:
    std::string nombre;
    std::string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(std::string nombre, std::string docIdentidad);
    Propietario(std::string docIdentidad);
    void mostrarInfo();
    std::string getNombre();
    void setNombre(std::string nombre);
    int getEdad();
    void setEdad(int edad);
    std::string getDocIdentidad();



};


#endif //PROPIETARIO_H
