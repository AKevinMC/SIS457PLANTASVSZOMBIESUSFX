#include "Planta.h"

Planta::Planta()
{
	PosicionX = 50;
	PosicionY = 50;
	Energia = 40;
	FuerzadeAtaque = 10;
	Alto = 32;
	Ancho = 32;
	Precio = 50;
}

void Planta::Atacar()
{
}

void Planta::Morir()
{
	Energia = 0;
}

void Planta::Disparar()
{
}
