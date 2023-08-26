#include "Puntuacion.h"

Puntuacion::Puntuacion() {
    puntos = 0;
}


void Puntuacion::aumentarPuntos(int cantidad) {
    puntos += cantidad;
}