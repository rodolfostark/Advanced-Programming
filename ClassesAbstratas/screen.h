#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

class Screen
{
private:
    int numero_linhas;
    int numero_colunas;
    char brush = '-';
    vector<vector<char>> matriz_tela;
public:
    Screen();
    Screen(int n_linhas, int n_colunas);
    void setPixel(int x, int y);
    void clear();
    void setBrush(char novoBrush);
    friend ostream& operator << (ostream &saida, Screen &tela);
};


#endif // SCREEN_H
