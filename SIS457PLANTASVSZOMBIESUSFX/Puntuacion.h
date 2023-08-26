#pragma once
class Puntuacion
{
private:
    int puntos;

public:
    int getPuntos() { return puntos; }

    Puntuacion();

    void aumentarPuntos(int cantidad);
};

