#include <iostream>
#include "poligono.h"

Poligono::Poligono()
{

}

void Poligono::inserirVertice(Point p)
{
    if(numeroVertices == 0){
        vertices[numeroVertices] = p;
    }
    else {
        numeroVertices++;
        vertices[numeroVertices] = p;
    }
}

int Poligono::quantidadeVertices()
{
    return numeroVertices + 1;
}

float Poligono::areaPoligono()
{
    float area = 0.0;
    for(int i = 0, j = n;i < n+1;i++, j = n){
        area += (vertices[j].getX() + vertices[i].getX()) * (vertices[j].getY() - vertices[i].getY());
    }
    return abs(area/2);
}
void Poligono::transladarPoligono(float a, float b){
    for(int i = 0; i <= numeroVertices; i++){
        vertices[i].translada(a, b);
    }
}
void Poligono::imprimirPoligono(){
    for(int i = 0; i <= numeroVertices; i++){
        cout << vertices[i].imprime(); << "->";
    }
}
