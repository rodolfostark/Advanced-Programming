#include "leitordefiguras.h"
<<<<<<< HEAD
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
=======
#include <string>
>>>>>>> afa5106f33663bc04a5095e7feb097d3af12c403
#include <sstream>

using namespace std;

<<<<<<< HEAD

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
=======
LeitorDeFiguras::LeitorDeFiguras(ifstream &arquivo)
{
    stringstream comando;
    if(arquivo.is_open()){
        while(getline(arquivo, comando));
    }
>>>>>>> afa5106f33663bc04a5095e7feb097d3af12c403
}
