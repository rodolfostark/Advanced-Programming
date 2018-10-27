#include <iostream>
#include "figurageometrica.h"
#include "screen.h"
#include "reta.h"

using namespace std;

int main()
{
    Reta reta(40, 1, 1, 40);
    Screen novaTela(40, 40);
    novaTela.setBrush('#');
    reta.draw(novaTela);
    novaTela.setPixel(1, 40);
    cout << novaTela << endl;
    return 0;
}
