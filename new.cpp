#include <iostream>

using namespace std;

int main(){
    int * pt = new int;
    *pt = 1001;
    cout << sizeof(pt) << endl;
    cout << sizeof(*pt) << endl;

    return 0;
}
