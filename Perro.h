//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* vVeterinario;
    Raza* rRaza;

public:
    Perro();
    ~Perro(); //Destructor
    Perro(std::string nombre, int edad, std::string raza, std::string color, std::string tamanio);

    void ladrar();
    Propietario * getPropietario();
    Veterinario * getVeterinario();
    Raza * getRRaza();
    void agregarVeterinario(std::string nombre, int aniosExperiencia);
    void setVeterinario(Veterinario * vVeterinario);
    void agregarRaza(std::string nombre, std::string paisOrigen);
    void setRRaza(Raza * rRaza);

    // Sirve para crear un objeto de clase propitario desde dentro de la clase perro, y relacionarlo directamente con un objeto de la clase perro
    void agregarPropietario(std::string nombre, std::string docIdentidad);

    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);


    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
