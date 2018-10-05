#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono
{
protected:
    Point vertices[100];
    int numeroVertices = 0;
public:
    Poligono();
    void inserirVertice(Point p);
    int quantidadeVertices();
    float areaPoligono();
    void transladarPoligono(float a, float b);
    void rotacionarPoligono(float a, float b, float angulo);
    void imprimirPoligono();
};

#endif // POLIGONO_H
