#include "Pala.h"

Pala::Pala() {
    NumDeUsos = 5;
     PosicionX = 2;
     PosicionY = 2;
}

void Pala::usarPala() {

    if (NumDeUsos > 0) {
        NumDeUsos--;
    }
}

void Pala::desaparecer()
{
    if (NumDeUsos == 0) {
        setPosicionX(-1);
        setPosicionY(-1);
    }
}
