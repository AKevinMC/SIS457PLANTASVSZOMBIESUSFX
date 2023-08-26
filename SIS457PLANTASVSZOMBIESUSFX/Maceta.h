#pragma once
#include <iostream>

using namespace std;

class Maceta
{
private:

	float PosicionX;
	float PosicionY;
	int DireccionY;
	int Alto;
	int Ancho;
	bool ocupada;

public:

	Maceta();

	bool EstaOcupada();
	void Plantar();

};

