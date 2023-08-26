#include "Proyectil.h"

Proyectil::Proyectil()
{
	PosicionX = 1;
	PosicionY = 2;
	Velocidad = 20;
	Daño = 30;
}

void Proyectil::avanzar()
{
	PosicionX += Velocidad;
}

void Proyectil::colisionar()
{
	PosicionX = -1;
}
