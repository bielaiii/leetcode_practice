#include <iostream>
#include <queue>
#include <vector>
#include "header.h"
#include "printer.h"
using namespace std;

template <typename T>
void printVector(vector<T> vt)
{
    for(auto t : vt)
    {
        cout << t << " -> ";
    }
    cout << endl;
}

int main()
{
    using namespace type_B;
    vector<int> vt {1, 2,  100};
    vector<int> vt1 {0,1,3,5,6};
    cout << type_B::hIndex(vt) << endl;;
    cout << type_B::hIndex(vt1) << endl;;
    
    return 0;
}