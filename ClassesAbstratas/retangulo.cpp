#include "retangulo.h"

Retangulo::Retangulo(int _x, int _y, int _altura, int _largura, int _fillmode)
{
    x = _x;
    y = _y;
    altura = _altura;
    largura = _largura;
    fillmode = _fillmode;
}

void Retangulo::draw(Screen &tela)
{
    if(fillmode == 1){
        for(int i = x; i <= x + altura; i++){
            for(int j = y; j <= y + largura; j++){
                tela.setPixel(i, j);
            }
        }
    }
    if(fillmode == 0){
        for(int i = x; i <= x + altura; i++){
            for(int j = y; j <= y + largura; j++){
                tela.setPixel(i, j);
            }
        }
        char aux_brush = tela.getBrush();
        tela.setBrush('-');
        for(int i = x+1; i <= x + altura-1; i++){
            for(int j = y+1; j <= y + largura-1; j++){
                tela.setPixel(i, j);
            }
        }
        tela.setBrush(aux_brush);
    }
}
