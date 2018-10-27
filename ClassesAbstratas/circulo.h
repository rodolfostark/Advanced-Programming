#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
private:
    int x, y;
    int raio;
public:
    Circulo(int _x, int _y, int _raio);
    void draw(Screen &tela);
};

#endif // CIRCULO_H
