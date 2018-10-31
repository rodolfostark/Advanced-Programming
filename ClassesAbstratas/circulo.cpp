#include "circulo.h"
#include "reta.h"

Circulo::Circulo(int _x, int _y, int _raio, int _fillmode, char _brush)
{
    x = _x;
    y = _y;
    raio = _raio;
    fillmode = _fillmode;
    brush = _brush;
}
void Circulo::draw(Screen &tela)
{
    char aux_brush = tela.getBrush();
    tela.setBrush(brush);
    int _x = raio - 1;
    int _y = 0;
    int dx = 1;
    int dy = 1;
    int err = dx - (raio << 1);

    if(fillmode == 0){
        while (_x >= _y)
        {
            tela.setPixel(x + _x, y + _y);
            tela.setPixel(x + _y, y + _x);
            tela.setPixel(x - _y, y + _x);
            tela.setPixel(x - _x, y + _y);
            tela.setPixel(x - _x, y - _y);
            tela.setPixel(x - _y, y - _x);
            tela.setPixel(x + _y, y - _x);
            tela.setPixel(x + _x, y - _y);
            if (err <= 0)
            {
                _y++;
                err += dy;
                dy += 2;
            }

            if (err > 0)
            {
                _x--;
                dx += 2;
                err += dx - (raio << 1);
            }
        }

    }
    if(fillmode == 1){
        while (_x >= _y)
        {
            Reta reta1(x, y, x + _x, y + _y, brush);
            reta1.draw(tela);
            Reta reta2(x, y, x + _y, y + _x, brush);
            reta2.draw(tela);
            Reta reta3(x, y, x - _y, y + _x, brush);
            reta3.draw(tela);
            Reta reta4(x, y, x - _x, y + _y, brush);
            reta4.draw(tela);
            Reta reta5(x, y, x - _x, y - _y, brush);
            reta5.draw(tela);
            Reta reta6(x, y, x - _y, y - _x, brush);
            reta6.draw(tela);
            Reta reta7(x, y, x + _y, y - _x, brush);
            reta7.draw(tela);
            Reta reta8(x, y, x + _x, y - _y, brush);
            reta8.draw(tela);
            if (err <= 0)
            {
                _y++;
                err += dy;
                dy += 2;
            }

            if (err > 0)
            {
                _x--;
                dx += 2;
                err += dx - (raio << 1);
            }
        }
    }
    tela.setBrush(aux_brush);
}
