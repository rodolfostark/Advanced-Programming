#include <iostream>
#include "screen.h"

using namespace std;

int main()
{
    Screen novaTela(3, 3);
    novaTela.setBrush('$');
    novaTela.setPixel(2, 2);
    novaTela.printScreen();
    return 0;
}
