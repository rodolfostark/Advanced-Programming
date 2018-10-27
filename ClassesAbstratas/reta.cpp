#include "screen.h"
#include "reta.h"
#include "funcoes.h"

Reta::Reta(int _x1, int _y1, int _x2, int _y2)
{
    x1 = _x1;
    y1 = _y1;
    x2 = _x2;
    y2 = _y2;
}

void Reta::draw(Screen &tela){
    int x = x1;
    int y = y1;
    int delta_x = abs(x2 - x1);
    int delta_y = abs(y2 - y1);
    int s1 = sinal(x2 - x1);
    int s2 = sinal(y2 - y1);
    int troca;
    if(delta_y > delta_x){
        int temp = delta_x;
        delta_x = delta_y;
        delta_y = temp;
        troca = 1;
    }
    else{
        troca = 0;
    }
    int new_e = 2*delta_y - delta_x;
    for(int i=1; i <= delta_x; i++){
        tela.setPixel(x, y);
        while (new_e >= 0)
        {
            if(troca == 1){
                x = x + s1;
            }
            else{
                y = y + s2;
            }
            new_e = new_e - 2*delta_x;
        }
        if(troca == 1){
            y = y + s2;
        }
        else{
            x = x + s1;
        }
        new_e = new_e + 2*delta_y;
    }
}
