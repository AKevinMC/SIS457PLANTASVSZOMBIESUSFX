#pragma once
#include <iostream>
using namespace std;

class Moneda
{
private:
	string Nombre;
	float PosicionX;
	float PosicionY;
	int DireccionY;
	int Forma;
	float Valor;
	string Visibilidad;

public:

	Moneda();

	void setNombre(string _nombre) { Nombre = _nombre; }
	string getNombre() { return Nombre; }

	void setPosicionX(float _posicionX) { PosicionX = _posicionX; }
	int getPosicionX() { return PosicionX; }

	void setPosicionY(float _posicionY) { PosicionX = _posicionY; }
	int getPosicionY() { return PosicionY; }

	void setDireccionY(float _direccionY) { DireccionY = _direccionY; }
	int getDireccionY() { return DireccionY; }

	void setForma(int _forma) { Forma = _forma; }
	int getForma() { return Forma; }

	void setValor(float _valor) { Valor = _valor; }
	float getValor() { return Valor; }

	void Recolectar();
	void Actualizar();
	void Colicion();
	void Respawn();

};