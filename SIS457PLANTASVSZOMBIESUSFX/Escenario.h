#pragma once
#include <iostream>

using namespace std;

class Escenario
{
	// Propiedades

private:
	string Nombre;
	string ImagendeCampo;
	int Filas;
	int Columnas;

		// Metodos Accesores
public:
	string getNombre() { return Nombre; }
	void setNombre(string _nombre) { Nombre = _nombre; }

	string getImagendeCampo() { return ImagendeCampo; }
	void setImagendeCampo(string _imagendeCampo) { ImagendeCampo = _imagendeCampo; }

	int getFilas() { return Filas; }
	void setFilas(int _filas) { Filas = _filas; }

	int getColumnas() { return Columnas; }
	void setColumnas(int _columnas) { Columnas = _columnas; }

	Escenario();

	
	void ColocarPlanta();
};


