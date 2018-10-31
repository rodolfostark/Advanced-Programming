#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"

class Circulo : public FiguraGeometrica
{
private:
    int x, y;
    int raio;
    int fillmode;
    char brush;
public:
    Circulo(int _x, int _y, int _raio, int _fillmode, char _brush);
    void draw(Screen &tela);
};

#endif // CIRCULO_H
