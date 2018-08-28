#include <iostream>
#include <cmath>

using namespace std;

class Vetor
{
private:
    float x;
    float y;
public:
    void setX(float _x){
        x = _x;
    }
    float getX(){
        return x;
    }
    void setY(float _y){
        y = _y;
    }
    float getY(){
        return y;
    }
    float tamanho(){
        return sqrt(x*x + y*y);
    }
    float angulo(){
        return atan(y/x);
    }
    Vetor unitario(){
        Vetor u;
        u.setX(getX()/tamanho());
        u.setY(getY()/tamanho());
        return u;
    }
};


int main()
{
    cout << "Criando dois vetores: " << endl;
    Vetor v, u;
    v.setX(3);
    v.setY(4);
    u = v.unitario();
    cout << "v.tamanho: " << v.tamanho() << endl;
    cout << "u.tamanho: " << u.tamanho() << endl;
    cout << "v.angulo: " << v.angulo() << endl;
    cout << "u.angulo: " << u.angulo() << endl;
    return 0;
}
