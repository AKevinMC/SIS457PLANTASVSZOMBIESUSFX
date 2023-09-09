#pragma once
#include "Zombie.h"
class ZombieCaracono :
    public Zombie
{
private:
    int Proteccion;
public:
    
    //constructor
    ZombieCaracono();

    // metodos accesores

    int getProteccion() { return Proteccion; }
    void setProteccion(int _proteccion) { Proteccion = _proteccion; }
};

