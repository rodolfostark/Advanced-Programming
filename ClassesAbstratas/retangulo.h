#ifndef RETANGULO_H
#define RETANGULO_H

#include "screen.h"
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
    int x, y;
    int altura;
    int largura;
    int fillmode;
    char brush;
public:
    Retangulo(int _x, int _y, int _altura, int _largura, int _fillmode, char _brush);
    void draw(Screen &tela);
};

#endif // RETANGULO_H
