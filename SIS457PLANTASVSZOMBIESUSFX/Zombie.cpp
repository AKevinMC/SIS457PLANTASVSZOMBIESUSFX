#include "Zombie.h"

Zombie::Zombie()
{
	Energia = 100;
	nivelFuria = 20;
	FuerzadeAtaque = 10;
	Velocidad = 30;
	PosicionX = -1;
	PosicionY = -1;
	TipoZombie = "Zombie normal";
}

void Zombie::moverse()
{
	PosicionX += Velocidad;
}

void Zombie::atacar()
{

}

void Zombie::morir() {

}

void Zombie::morder()
{
}