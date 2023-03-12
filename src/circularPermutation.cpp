#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> circularPermutation(int n, int start) {
    vector<int> vt(1 << n);
    for (int i = 0; i < vt.size(); i++) {
        vt[i] = start ^ i ^ (i >> 1);
    }
    return vt;
}