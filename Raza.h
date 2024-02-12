//
// Created by danio on 11/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZA_H
#define INC_3_CREAROBJASOCIACION_RAZA_H

#include <string>
#include <iostream>

using namespace std;

class Raza {
private:
    //atributos
    string nombre;
    string paisOrigen;

public:
    //constructores
    Raza();
    Raza(string nombre, string paisOrigen);

    //modificadores
    void setNombre(string nombre);
    string getNombre();
    void setpaisOrigen(string paisOrigen);
    string getpaisOrigen();
};

#endif //INC_3_CREAROBJASOCIACION_RAZA_H
