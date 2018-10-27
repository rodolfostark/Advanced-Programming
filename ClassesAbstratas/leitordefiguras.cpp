#include "leitordefiguras.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;


LeitorDeFiguras::LeitorDeFiguras(ifstream &arquivo)
{
    stringstream ss;
    string leitor;
    while (arquivo.good()) {
        getline(arquivo, leitor);
    }
    //if(arquivo.is_open()){
      //  while(getline(arquivo, ss));
    //}
}
