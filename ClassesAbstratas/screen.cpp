#include <iostream>
#include <vector>
#include "screen.h"

Screen::Screen()
{

}

Screen::Screen(int n_linhas, int n_colunas)
{

    numero_linhas = n_linhas;
    numero_colunas = n_colunas;
    vector<vector<char>> aux(numero_linhas, vector<char>(numero_colunas, brush));
    matriz_tela = aux;
}

void Screen::setPixel(int x, int y)
{
    matriz_tela[x-1][y-1] = brush;
}

void Screen::setBrush(char novoBrush)
{
    brush = novoBrush;
}

void Screen::printScreen()
{
    for(int i = 0; i < numero_linhas; i++){
        for(int j = 0; j < numero_colunas; j++){
            cout << matriz_tela[i][j] << " ";
        }
        cout << endl;
    }
}
