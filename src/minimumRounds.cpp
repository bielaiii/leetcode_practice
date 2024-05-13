#include "header.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int IsDivisible(int n) {
    if (n < 2) {
        return -1;
    }
    if (n == 2) {
        return 1;
    }
    if (n == 3) {
        return 1;
    }
    vector<unsigned long long> vt(n + 4, 1e10);
    vt[2] = 1;
    vt[3] = 1;
    for (int i = 2; i <= n; i++) {
        
        vt[i + 2] = min(vt[i + 2], vt[i] + 1); 
        vt[i + 3] = min(vt[i + 3], vt[i] + 1); 
    
    }
    return vt[n];
}

int minimumRounds(vector<int>& tasks) {
    map<int, int, greater<int>> mp;
    for (const auto& task : tasks) {
        mp[task]++;
    }
    int ans = 0;
    for (auto [k, v] : mp) {
        if (v < 2) {
            return -1;
        }
        ans += IsDivisible(v);
    }
    return ans;
}