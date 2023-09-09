#pragma once
#include "Zombie.h"
class ZombieCaracubo :
    public Zombie
{
private:
    bool ProteccionMetal;

public:

    //constructor
    ZombieCaracubo();

    // metodos accesores

    bool getProteccionMetal() { return ProteccionMetal; }
    void setProteccionMetal(bool _proteccionMetal) { ProteccionMetal = _proteccionMetal; }
};

