#include <iostream>
#include "figurageometrica.h"
#include "screen.h"
#include "reta.h"
#include "funcoes.h"

void desenhaReta(int _x1, int _y1, int _x2, int _y2, Screen &t){
    int x = _x1;
    int y = _y1;
    int Delta_x = abs(_x2 - _x1);
    int Delta_y = abs(_y2 - _y1);
    int s1 = sinal(_x2 - _x1);
    int s2 = sinal(_y2 - _y1);
    int Troca;
    if(Delta_y > Delta_x){
        int Temp = Delta_x;
        Delta_x = Delta_y;
        Delta_y = Temp;
        Troca = 1;
    }
    else{
        Troca = 0;
    }
    int new_e = 2*Delta_y - Delta_x;
    for(int i=1; i<= Delta_x; i++){
        std::cout << "(" << x << "," << y << ")" << std::endl;
        t.setPixel(x, y);
        while (new_e >= 0){
            if(Troca == 1){
                //Muda para a proxima linha de rasterização
                x = x + s1;
            }
            else{
                y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
        }

        //Permanece nesta linha de rasterização
        if(Troca == 1){
            y = y + s2;
        }
        else{
            x = x + s1;
        }
        new_e= new_e + 2*Delta_y;
    }
}

int main()
{
      FiguraGeometrica * f1;
      Reta r1(0, 0, 40, 40);
      f1 = &r1;
      Screen novaTela(40, 40), segundaTela(40, 40);
      novaTela.setBrush('*');
      desenhaReta(40,0,0,40, novaTela);
      std::cout << novaTela;
      //r1.draw(novaTela);
//    novaTela.setPixel(2, 2);
      segundaTela.setBrush('%');
      r1.desenhaReta(40,0,0,40, segundaTela);
      f1->draw(novaTela);
      std::cout << segundaTela;
    return 0;
}
