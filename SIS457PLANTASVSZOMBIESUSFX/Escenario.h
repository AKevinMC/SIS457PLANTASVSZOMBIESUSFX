#pragma once
#include <iostream>

using namespace std;

class Escenario
{
	// Propiedades
public:

	string Nombre;

private:

	int Filas;
	int Columnas;
	string ImagendeCampo;

	// Constructores
public:

	Escenario();

	//Propiedades

	void ColocarPlanta();
};


