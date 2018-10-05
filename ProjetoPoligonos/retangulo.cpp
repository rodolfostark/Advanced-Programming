#include "retangulo.h"

Retangulo::Retangulo(float _altura, float _largura, float _x, float _y)
{
    altura = _altura;
    largura = _largura;
    Point v1, v2, v3, v4;
    v1.setXY(_x, _y);
    v2.setXY(_x + largura, _y);
    v3.setXY(_x + largura, _y - altura);
    v4.setXY(_x, _y - altura);
    this->inserirVertice(v1);
    this->inserirVertice(v2);
    this->inserirVertice(v3);
    this->inserirVertice(v4);
    this->imprimirPoligono();
}

float Retangulo::areaRetangulo()
{
    return this->areaPoligono();
}
