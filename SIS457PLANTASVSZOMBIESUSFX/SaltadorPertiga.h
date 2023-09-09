#pragma once
#include "Zombie.h"
class SaltadorPertiga :
    public Zombie
{
    bool colicionZombie;

    SaltadorPertiga();

    void setColicionZombie(bool _colicionZombie) {colicionZombie = _colicionZombie;}
    bool getColicionZombie() { return colicionZombie; }
};
