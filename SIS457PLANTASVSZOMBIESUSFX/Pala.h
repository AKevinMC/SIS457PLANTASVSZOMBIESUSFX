#pragma once
#include <iostream>

using namespace std;

class Pala
{
private:

	int NumDeUsos;
	int PosicionX;
	int PosicionY;
public:

	void setPosicionX(int _posicionX) { PosicionX = _posicionX; }
	void setPosicionY(int _posicionY) { PosicionY = _posicionY; }

	Pala();

	void usarPala();
	void desaparecer();
};
