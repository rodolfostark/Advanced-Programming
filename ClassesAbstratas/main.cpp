#include <iostream>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    //Reta reta(40, 1, 1, 40);
    Retangulo plano(2, 5, 8, 8, 0);
    //Retangulo retangulo(15, 15, 6, 6, 0);
    Circulo circulo(20, 20, 6, 0);
    Circulo disco(32, 32, 8, 1);
    Screen novaTela(40, 40);
    novaTela.setBrush('#');
    novaTela.setPixel(1, 40);
    plano.draw(novaTela);
    circulo.draw(novaTela);
    disco.draw(novaTela);
    //retangulo.draw(novaTela);
    cout << novaTela << endl;
    return 0;
}
