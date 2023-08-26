#include "Podadora.h"

Podadora::Podadora()
{
	PosicionX = 2;
	velocidad = 50;
}

void Podadora::Activado()
{
	activo = true;
}

void Podadora::Desactivado()
{
	activo = false;
}

void Podadora::limpiar()
{
	PosicionX += velocidad;
}
