#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class Retangulo : Poligono
{
private:
    float altura;
    float largura;
public:
    Retangulo(float altura, float largura, float _x, float _y);
    float areaRetangulo();
};

#endif // RETANGULO_H
