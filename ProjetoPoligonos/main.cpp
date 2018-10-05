#include <iostream>
#include <cmath>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    /*Point v1, v2, v3;
    Poligono p1;
    v1.setXY(0,1);
    v2.setXY(2,3);
    v3.setXY(4,7);
    cout << "==== Projeto Poligonos ====" << endl;
    p1.inserirVertice(v1);
    p1.inserirVertice(v2);
    p1.inserirVertice(v3);
    p1.imprimirPoligono();
    //p1.rotacionarPoligono(2, 1, 90);
    float area = p1.areaPoligono();
    cout << "A área do proligono p1 é: " << area << " u.a." << endl;
    */
    cout << "=== Testando Retangulo ===" << endl;
    Retangulo r1(3, 4, 0, 0);
    float area = r1.areaRetangulo();
    r1.transladarPoligono(-3, 4);
    r1.imprimirPoligono();
    cout << "A área do retangulo vale: " << area << endl;
    return 0;
}
