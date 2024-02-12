//
// Created by danio on 11/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H

#include <string>
#include <iostream>

using namespace std;

class Veterinario {
    private:
        //atributos
        string nombre;
        int aniosExperiencia;

    public:
        //constructores
        Veterinario();
        Veterinario(string nombre, int aniosExperiencia);

        //modificadores
        void setNombre(string nombre);
        string getNombre();
        void setAniosExperiencia(int aniosExperiencia);
        int getAniosExperiencia();

        //metodos
        void mostrarInfo();
};


#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
