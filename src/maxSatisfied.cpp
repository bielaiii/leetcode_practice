#include<iostream>
#include<vector>
using namespace std;

int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int good = 0;
    for (int i = 0; i < customers.size(); i++) {
        if (grumpy[i] == 0) {
            good += customers[i];
            customers[i] = 0;
        }
    }
    int l = 0, r = 0;
    int temp = 0;
    int len = 0;
    while (r < customers.size()) {
        temp += customers[r];
        r++;
        if (r - l >= minutes) {
            len = max(len, temp);
            temp -= customers[l];
            l++;
        }
    }
    return len + good;
}