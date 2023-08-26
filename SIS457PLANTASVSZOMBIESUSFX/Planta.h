#pragma once
#include <iostream>

using namespace std;

class Planta
{
	//Propiedades
public:

	string Nombre;

private:

	float PosicionX;
	float PosicionY;
	int Energia;
	int FuerzadeAtaque;
	int Alto;
	int Ancho;
	string RutadeImagen;
	int Precio;

public:
	// Constructor
	Planta();

	// Metodos Accesores

	int getEnergia() { return Energia; }
	void setEnergia(int _energia) { Energia = _energia; }

	int getFuerzadeAtaque() { return FuerzadeAtaque; }
	void setFuerzadeAtaque(int _FuerzadeAtaque) { FuerzadeAtaque = _FuerzadeAtaque; }

	// Metodos Propios
	void Atacar();
	void Morir();
	void Disparar();

};

