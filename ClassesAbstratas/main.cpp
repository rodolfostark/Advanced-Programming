#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x;
    vector<int>::iterator it;
    x.push_back(3);
    x.push_back(4);
    x.push_back(5);
    x.push_back(-2);
    for(it = x.begin(); it != x.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;
    return 0;
}
