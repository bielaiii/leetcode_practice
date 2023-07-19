#include<iostream>
#include<vector>
using namespace std;

int maxTurbulenceSize(vector<int>& arr) {
    int len = 1;
    int up = 1;
    int down = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] < arr[i]) {
            up = down + 1;
            down = 1;
        } else if (arr[i - 1] > arr[i]) {
            down = up + 1;
            up = 1;
        } else {
            up = 1;
            down = 1;
        }
        len = max(len, max(up, down));
    }
    return len;
}