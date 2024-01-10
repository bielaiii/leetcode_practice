#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
void printVector(vector<T> vt)
{
    for (auto it : vt) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    
    //cout << minLength("ABFCACDB") << endl;
    //cout << minLength("ACBBD") << endl;
    cout << minLength("CCCCDDDD") << endl;

    return 0;
}