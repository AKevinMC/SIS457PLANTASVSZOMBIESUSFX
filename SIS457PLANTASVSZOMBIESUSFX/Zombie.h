#pragma once
#include <iostream>

using namespace std;

class Zombie
{
public:
	string Nombre;

private:
	int Energia;
	int nivelFuria;
	int FuerzadeAtaque;
	string TipoZombie;

protected:
	float PosicionX;
	float PosicionY;
	int DireccionX;
	int DireccionY;
	int Velocidad;

public:
	//Contructores
	Zombie();

	//Metodos accesores
	void setEnergia(int _energia) { Energia = _energia; }
	int getEnergia() { return Energia; }

	void setNombre(string _nombre) { Nombre = _nombre; }
	string getNombre() { return Nombre; }

	void setNivelFuria(int _nivelFuria) { nivelFuria = _nivelFuria; }
	int getNivelFuria() { return nivelFuria; }

	void setFuerzadeAtaque(int _fuerzadeAtaque) { FuerzadeAtaque = _fuerzadeAtaque; }
	int getFuerzadeAtaque() { return FuerzadeAtaque; }

	void setVelocidad(int _velocidad) { Velocidad = _velocidad; }
	int getVelocidad() { return Velocidad; }

	void setPosicionX(float _posicionX) { PosicionX = _posicionX; }
	float getPosicionX() { return PosicionX; }

	void setPosicionY(float _posicionY) { PosicionY = _posicionY; }
	float getPosicionY() { return PosicionY; }

	void setTipoZombie(string _tipoZombie) { TipoZombie = _tipoZombie; }
	string getTipoZombie() { return TipoZombie; }



	//Metodos propios
	void moverse();

	void atacar();
	void morir();
	void morder();
};