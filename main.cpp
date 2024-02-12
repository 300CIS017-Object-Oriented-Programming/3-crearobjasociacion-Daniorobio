#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    Perro *maikol = new Perro("Maikol", 2, "Bichon Maltes", "Blanco", "Pequeno");

    std::cout << maikol->getNombre() << " dijo ";
    maikol->ladrar();
    std::cout << std::endl;

    Propietario *p = new Propietario("777");
    p->setNombre("pepe");
    p->setEdad(32);
    p->mostrarInfo();

    maikol->agregarPropietario("Daniela Orobio", "1058932191");

    std::cout << "el documento del propietario de " << maikol->getNombre() << " es " << maikol->getPropietario()->getDocIdentidad() << std::endl;
    maikol->getPropietario()->setEdad(19);
    std::cout << maikol->getPropietario()->getNombre() << " tiene " << maikol->getPropietario()->getEdad() << " anios" << std::endl;

    maikol->agregarVeterinario("super mascotas", 10);
    maikol->getVeterinario()->mostrarInfo();

    Raza *MN = new Raza("Mastin Napolitano", "Italia");
    Raza *M = new Raza("Maltes", "Italia");

    firulais.setRRaza(MN);

    std::cout << firulais.getNombre() << " es de la raza " << firulais.getRRaza()->getNombre() << " proveniente de " << firulais.getRRaza()->getpaisOrigen() << std::endl;


    return 0;
}
