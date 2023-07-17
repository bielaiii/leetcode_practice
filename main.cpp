#include<iostream>
#include<queue>
#include<vector>
#include"header.h"
#include"printer.h"
using namespace std;


int main()
{
    vector<int> vt1 = { 9,4,2,10,7,8,8,1,9};
    cout << maxTurbulenceSize(vt1) << endl;
    vector<int> vt2 = { 4, 8, 12, 16};
    cout << maxTurbulenceSize(vt2) << endl;
    vector<int> vt3 = {100};
    cout << maxTurbulenceSize(vt3) << endl;
    vector<int> vt4 = {99, 99};
    cout << maxTurbulenceSize(vt4) << endl;
    return 0;
}