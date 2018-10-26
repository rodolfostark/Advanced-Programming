#include "leitordefiguras.h"
#include <string>
#include <sstream>

using namespace std;

LeitorDeFiguras::LeitorDeFiguras(ifstream &arquivo)
{
    stringstream comando;
    if(arquivo.is_open()){
        while(getline(arquivo, comando));
    }
}
