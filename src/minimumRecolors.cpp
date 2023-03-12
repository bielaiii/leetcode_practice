#include<iostream>
#include<vector>
#include<map>
using namespace std;

int minimumRecolors(string blocks, int k) {
    int ct= 0 ;
    for (int i = 0; i < k ; i++){
        if (blocks[i] == 'W') {
            ++ct;
        }
    }
    int ans = INT32_MAX;
    for (int i = k; i < blocks.size(); i++) {
        ct -= blocks[i - k] == 'W' ? 1 : 0;
        ct += blocks[i - k] == 'B' ? 1 : 0;
        ans = min(ans, ct);
    }
    return min(ans, ct);
}