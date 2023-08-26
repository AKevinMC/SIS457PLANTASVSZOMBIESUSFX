#pragma once
#include <iostream>

using namespace std;

class Podadora
{
private:
    int PosicionX;
    bool activo;
    int velocidad;
public:

    Podadora();
    void Activado();
    void Desactivado();
    void limpiar();
};