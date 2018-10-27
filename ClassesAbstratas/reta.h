#ifndef RETA_H
#define RETA_H

#include "figurageometrica.h"

class Reta : public FiguraGeometrica
{
private:
    int x1, y1;
    int x2, y2;
public:
    Reta(int _x1, int _y1, int _x2, int _y2);
    void draw(Screen &t);
<<<<<<< HEAD
    void desenhaReta(int _x1, int _y1, int _x2, int _y2, Screen &t);
=======
>>>>>>> afa5106f33663bc04a5095e7feb097d3af12c403
};

#endif // RETA_H
