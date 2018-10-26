#include "reta.h"

Reta::Reta(int _x1, int _y1, int _x2, int _y2)
{
    x1 = _x1;
    y1 = _y1;
    x2 = _x2;
    y2 = _y2;
}

void Reta::draw(Screen &t){
    int m_new = 2 * (y2 - y1);
    int slope_error_new = m_new - (x2 - x1);
    for (int x = x1, y = y1; x <= x2; x++)
    {
        t.setPixel(x, y);
        slope_error_new += m_new;
        if (slope_error_new >= 0)
        {
            y++;
            slope_error_new  -= 2 * (x2 - x1);
        }
    }
}
