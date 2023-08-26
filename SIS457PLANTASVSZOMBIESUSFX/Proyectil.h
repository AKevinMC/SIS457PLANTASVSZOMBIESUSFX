#pragma once
#include <iostream>

using namespace std;

class Proyectil
{
	// Propiedades
private:
	int Velocidad;
	int Daño;
	int PosicionX;
	int PosicionY;
	string Imagen;

	//Constructor
public:
	Proyectil();

	// Metodos Accesores y propios

	string getImagen() { return Imagen; }
	void setImagen(string _imagen) { Imagen = _imagen; }
	int getVelocidad() { return Velocidad; }
	void setVelocidad(int _velocidad) { Velocidad = _velocidad; }
	int getDaño() { return Daño; }
	void setDaño(int _daño) { Daño = _daño; }

	void avanzar();
	void colisionar();
};

