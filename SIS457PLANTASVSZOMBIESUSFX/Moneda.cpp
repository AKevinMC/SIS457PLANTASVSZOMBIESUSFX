#include "Moneda.h"

Moneda::Moneda()
{
	PosicionX = 60;
	PosicionY = 60;
	DireccionY = 30;
	Forma = 10;
	Valor = 50;
}


void Moneda::Recolectar()
{

}

void Moneda::Actualizar()
{

}

void Moneda::Colicion()
{
}

void Moneda::Respawn()
{
	PosicionX = 60;
	PosicionY = 60;
}