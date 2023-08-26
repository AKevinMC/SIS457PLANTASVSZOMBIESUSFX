#include <iostream>
#include "Escenario.h"
#include "Zombie.h"
#include "Planta.h"
#include "Proyectil.h"
#include "Sol.h"
#include "Puntuacion.h"
#include "Moneda.h"

using namespace std;

int main() {
				// Escenario

	Escenario* Jardin = new Escenario;
	Jardin->setNombre("Jardin");

	cout << "Escenario Actual: "<< Jardin->getNombre()<< endl;
	cout << "  Casillas en X: " << Jardin->getColumnas() << endl << "  Casillas en Y: " << Jardin->getFilas() << endl;

				// Zombie

	Zombie* ZombieNormal = new Zombie;
	ZombieNormal->setNombre("Juanito");

	cout << "El nombre del zombie es: " << ZombieNormal->getNombre() << endl;
	cout << "La energia del zombie es: " << ZombieNormal->getEnergia() << endl;
	cout << "La velocidad del zombie es: " << ZombieNormal->getVelocidad() << endl;
	cout << "La posicion X del zombie es: " << ZombieNormal->getPosicionX() << endl;
	cout << "La posicion Y del zombie es: " << ZombieNormal->getPosicionY() << endl;
	cout << "El tipo de zombie es: " << ZombieNormal->getTipoZombie() << endl;
				
				//Planta

	Planta* LanzaGuisantes = new Planta;
	LanzaGuisantes->Nombre = "Lanza Guisantes";

	cout << "Se creo la Planta llamada: " << LanzaGuisantes->Nombre << endl;
	cout << "Este Planta tiene una energia de: " << LanzaGuisantes->getEnergia() << endl;
	cout << "Este Planta tiene una fuerza de ataque de: " << LanzaGuisantes->getFuerzadeAtaque() << endl;

				// Proyectil

	Proyectil* proLanzaGuisante = new Proyectil;
	proLanzaGuisante->setDaño(30);
	cout << "Velocidad del proyectil: " << proLanzaGuisante->getVelocidad() << endl;
	cout << "Daño del proyectil: " << proLanzaGuisante->getDaño() << endl;

				//sol

	Sol* sol = new Sol;

	cout << "Se genero un Sol" << endl;
	cout << "El Sol desaparecio a los: " << sol->getTiempoenCampo() << " segundos" << endl;

				//Pumtuacion

	Puntuacion* puntuacion = new Puntuacion;
	int puntosGanados = 10;
	puntuacion->aumentarPuntos(puntosGanados);
	cout << "Puntuacion actual: " << puntuacion->getPuntos() << " puntos" << endl;

				//Moneda

	Moneda* monedaBronce = new Moneda;
	monedaBronce->setNombre("Moneda de Bronce");

	cout << "Se genero una Moneda: " << monedaBronce->getNombre() << endl;
	cout << "Este Moneda tiene un valor de: " << monedaBronce->getValor() << endl;
	cout << "La Posicion X de la moneda es: " << monedaBronce->getPosicionX() << endl;
	cout << "La Posicion Y de la moneda es: " << monedaBronce->getPosicionY() << endl;
	cout << "La Direccion Y de la moneda es: " << monedaBronce->getDireccionY() << endl;
	cout << "Este Moneda tiene una forma: " << monedaBronce->getForma() << " Redonda" << endl;
	return 0;
}