#ifndef SCREEN_H
#define SCREEN_H

#include<iostream>
#include<ostream>
#include <vector>

class Screen
{
private:
    int numero_linhas;
    int numero_colunas;
    char brush;
   // vector<vectot<char>> matriz_tela;
public:
    Screen();
    Screen(int numero_linhas, int numero_colunas);
    void setPixel(int x, int y);
    void clear();
    void setBrush();
    //friend ostream& operator << (ostream &os, Screen &t);
};

#endif // SCREEN_H
