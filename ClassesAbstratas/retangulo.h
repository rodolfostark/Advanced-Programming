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
public:
    Retangulo(int _x, int _y, int _altura, int _largura);
    void draw(Screen &tela);
};

#endif // RETANGULO_H
