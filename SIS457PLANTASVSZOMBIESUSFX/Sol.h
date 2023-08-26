#pragma once
#include <iostream>

using namespace std;

class Sol
{
	//Propiedades
private:

	float PosicionX;
	float PosicionY;
	int DireccionY;
	int Alto;
	int Ancho;
	int Valor;
	int TiempoenCampo;

	//Constructores
public:
	Sol();

	//Metodo Accesor
	int getTiempoenCampo() { return TiempoenCampo; }
	void setTiempoenCampo(int _tiempoenCampo) { TiempoenCampo = _tiempoenCampo; }

	//Propiedades
	void Moverse();

};

