#include <iostream>
#include "screen.h"
#include "reta.h"
#include "funcoes.h"
#include "reta.h"


Reta::Reta(int _x1, int _y1, int _x2, int _y2)
{
    x1 = _x1;
    y1 = _y1;
    x2 = _x2;
    y2 = _y2;
}

void Reta::draw(Screen &t){
    int x = x1;
    int y = y1;
    int Delta_x = abs(x2 - x1);
    int Delta_y = abs(y2 - y1);
    int s1 = sinal(x2 - x1);
    int s2 = sinal(y2 - y1);
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
    std::cout << "(" << x << "," << y << ")" << std::endl;
    int new_e = 2*Delta_y - Delta_x;
    for(int i=1; i <= Delta_x; i++){
        std::cout << "(" << x << "," << y << ")" << std::endl;
        t.setPixel(x, y);
        while (new_e >= 0)
        {
            if(Troca == 1){
                x = x + s1;
            }
            else{
                y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
        }
        if(Troca == 1){
            y = y + s2;
        }
        else{
            x = x + s1;
        }
        new_e = new_e + 2*Delta_y;
    }
}

void Reta::desenhaReta(int _x1, int _y1, int _x2, int _y2, Screen &t)
{
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
    int m_new = 2 * (y2 - y1);
    int slope_error_new = m_new - (x2 - x1);
    for (int x = x1, y = y1; x <= x2; x++)
    {
        t.setPixel(x, y);
        slope_error_new += m_new;
        if (slope_error_new >= 0)
        {
            y++;
            slope_error_new  -= 2 * (x2 - x1);
        }
    }
}
