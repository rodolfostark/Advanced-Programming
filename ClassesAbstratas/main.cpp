#include <iostream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <string>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main()
{
    fstream arquivo;
    ofstream saida;
    string linha;
    string comando;
    stringstream ss;
    int altura, largura;
    vector<FiguraGeometrica *> figuras;
    arquivo.open("/home/rodolfo/Documentos/C&T - COMPUTAÇÃO/4º SEMESTRE/PROGRAMAÇÃO AVANÇADA/DCA1202/ClassesAbstratas/figuras.txt");
    saida.open("/home/rodolfo/Documentos/C&T - COMPUTAÇÃO/4º SEMESTRE/PROGRAMAÇÃO AVANÇADA/DCA1202/ClassesAbstratas/saida.txt");
    while(arquivo.good()){
        getline(arquivo, linha);
        if(!arquivo.good()){
            break;
        }
        linha += " ";
        ss = stringstream(linha);
        ss >> comando;
        if(comando.compare("dim") == 0){
            ss >> altura >> largura;
        }
        else if(comando.compare("rectangle") == 0){
            int x0, y0, larg, alt, tipo;
            char brush;
            ss >> x0 >> y0 >> larg >> alt >> tipo >> brush;
            figuras.push_back(new Retangulo(x0, y0, alt, larg, tipo, brush));
        }
        else if (comando.compare("circle") == 0) {
            int x0, y0, raio, tipo;
            char brush;
            ss >> x0 >> y0 >> raio >> tipo >> brush;
            figuras.push_back(new Circulo(x0, y0, raio, tipo, brush));
        }
        else if (comando.compare("line") == 0) {
            int x0, y0, x1, y1;
            char brush;
            ss >> x0 >> y0 >> x1 >> y1 >> brush;
            figuras.push_back(new Reta(x0, y0, x1, y1, brush));
        }
    }
    arquivo.close();
    Screen tela(altura, largura);
    tela.setBrush('.');
    for(int i = 0; i < int(figuras.size()); i++){
        figuras[i]->draw(tela);
    }
    saida << tela;
    saida.close();
    cout << tela;
    return 0;
}
