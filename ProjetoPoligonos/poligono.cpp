#include <iostream>
#include <cmath>
#include "poligono.h"

using namespace std;

Poligono::Poligono()
{

}

void Poligono::inserirVertice(Point p)
{
    if(numeroVertices < 100){
        if(numeroVertices == 0){
            vertices[numeroVertices] = p;
            numeroVertices++;
        }
        else {
            vertices[numeroVertices] = p;
            numeroVertices++;
        }
    }
    else {
        cout << "Impossível inserir novo vértice!" << endl;
    }
}

int Poligono::quantidadeVertices()
{
    return numeroVertices;
}

float Poligono::areaPoligono()
{
    float area = 0.0;
    int j = numeroVertices-1;
    for(int i = 0;i < numeroVertices;i++){
        area += (vertices[j].getX() + vertices[i].getX()) * (vertices[j].getY() - vertices[i].getY());
        j = i;
    }
    return abs(area/2);
}
void Poligono::transladarPoligono(float a, float b){
    for(int i = 0; i < numeroVertices; i++){
        vertices[i].translada(a, b);
    }
}

void Poligono::rotacionarPoligono(float a, float b, float angulo)
{
    angulo = angulo*(M_PI/180);
    transladarPoligono(a, b);
    for(int i = 0; i < numeroVertices; i++){
        float novoX = vertices[i].getX()*cos(angulo) - vertices[i].getY()*sin(angulo);
        float novoY = vertices[i].getY()*cos(angulo) + vertices[i].getX()*sin(angulo);
        vertices[i].setXY(novoX, novoY);
    }
    transladarPoligono(-a, -b);
}
void Poligono::imprimirPoligono(){
    for(int i = 0; i < numeroVertices; i++){
        vertices[i].imprime();
        cout << "->";
    }
    vertices[0].imprime();
    cout << endl;
}
