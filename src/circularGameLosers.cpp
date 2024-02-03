#include<iostream>
#include <vector>
using namespace std;

vector<int> circularGameLosers(int n, int k) {
    int i = 1;
    vector<int> vt(n,0);
    int cur = 0;
    while (cur < n) {
       if (vt[cur] == 1) {
            break;
       } 
       vt[cur] = 1;
       cur = (cur + i * k) % n;
       i++;
    }
    vector<int> ret;
    for (int j = 0; j < n; j++) {
        if (vt[j] == 0) {
            ret.push_back(j + 1);
        
        }
    }
    return ret;

}