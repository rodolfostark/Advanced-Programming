#include "retangulo.h"

Retangulo::Retangulo(int _x, int _y, int _altura, int _largura, int _fillmode, char _brush)
{
    x = _x;
    y = _y;
    altura = _altura;
    largura = _largura;
    fillmode = _fillmode;
    brush = _brush;
}

void Retangulo::draw(Screen &tela)
{
    if(fillmode == 1){
        char aux_brush = tela.getBrush();
        tela.setBrush(brush);
        for(int i = x; i <= x + altura; i++){
            for(int j = y; j <= y + largura; j++){
                tela.setPixel(i, j);
            }
        }
        tela.setBrush(aux_brush);
    }
    if(fillmode == 0){
        char aux_brush = tela.getBrush();
        tela.setBrush(brush);
        for(int i = x; i <= x + altura; i++){
            for(int j = y; j <= y + largura; j++){
                tela.setPixel(i, j);
            }
        }
        tela.setBrush(aux_brush);
        for(int i = x+1; i <= x + altura-1; i++){
            for(int j = y+1; j <= y + largura-1; j++){
                tela.setPixel(i, j);
            }
        }

    }
}
