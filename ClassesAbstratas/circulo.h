#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
private:
    int x, y;
    float raio;
public:
    void draw(Screen &t);
};

#endif // CIRCULO_H
