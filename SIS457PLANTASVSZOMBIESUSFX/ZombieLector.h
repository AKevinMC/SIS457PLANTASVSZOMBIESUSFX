#pragma once
#include "Zombie.h"
class ZombieLector :
    public Zombie
{
private:
    bool colision;

public:

    ZombieLector();

    void saltar();
};

