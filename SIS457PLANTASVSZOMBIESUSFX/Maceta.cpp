#include "Maceta.h"

Maceta::Maceta()
{
	 PosicionX = -1;
	 PosicionY = -1;
	 DireccionY = -1;
	 ocupada = false;
	 Alto = 5;
	 Ancho = 3;
}

bool Maceta::EstaOcupada()
{
	return ocupada;
}

void Maceta::Plantar()
{
	if (!ocupada) {
		ocupada = true;
	}
}
