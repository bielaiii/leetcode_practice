#include "header.h"
#include "printer.h"
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
void printVector(vector<T> vt, int len)
{
    for (int i = 0; i < len; i++) {
        cout << vt[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> vt { { 1, 2, 2 }, { 3, 8, 2 }, { 5, 3, 5 } };
    cout << minimumEffortPath(vt) << endl;

    vector<vector<int>> vt1 { { 1, 2, 3 }, { 3, 8, 4 }, { 5, 3, 5 } };
    cout << minimumEffortPath(vt1) << endl;
    vector<vector<int>> vt2 { { 11, 2, 1, 1, 1 }, { 1, 2, 1, 2, 1 }, { 1, 2, 1, 2, 1 },
        { 1, 2, 1, 2, 1 }, { 1, 1, 1, 2, 1 }
    };
    cout << minimumEffortPath(vt2) << endl;
    return 0;
}