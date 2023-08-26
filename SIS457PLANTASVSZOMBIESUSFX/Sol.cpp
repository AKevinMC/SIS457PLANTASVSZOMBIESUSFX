#include "Sol.h"

Sol::Sol()
{
	PosicionX = 32;
	PosicionY = 32;
	DireccionY = 1;
	Alto = 20;
	Ancho = 20;
	Valor = 25;
	TiempoenCampo = 5;
}

void Sol::Moverse()
{
	PosicionX += DireccionY;
	PosicionY += DireccionY;
}


