#include <iostream>
#include "screen.h"
#include "reta.h"

int main()
{
    Reta r1(0,0,4,4);
    Screen novaTela(6, 6);
    novaTela.setBrush('$');
    novaTela.setPixel(2, 2);
    r1.draw(novaTela);
    std::cout << novaTela;
    return 0;
}
