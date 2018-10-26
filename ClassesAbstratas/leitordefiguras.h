#ifndef LEITORDEFIGURAS_H
#define LEITORDEFIGURAS_H

#include "figurageometrica.h"
#include <vector>
#include <istream>

class LeitorDeFiguras
{
private:
    std::vector<FiguraGeometrica> figuras;
public:
    LeitorDeFiguras(ifstream &arquivo);
};

#endif // LEITORDEFIGURAS_H
