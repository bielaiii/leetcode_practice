#include <cstdio>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

int characterReplacement(string s, int k) {
    int l = 0;
    int r = 0;
    int count = k;
    int len = 0;
    vector<int> vt(26, 0);
    int maxcount = 0;
    int ret = 0;
    while (r < s.length()) {
        vt[s[r] - 'A'] ++;

        maxcount = max(maxcount, vt[s[r] - 'A']);
        r++;
        if (r - l > maxcount + k) {
            vt[s[l] - 'A']--;
            l++;
        }
        //printf("%d %d\n", l, r);
        ret = max(ret, r - l);
    }
    return ret;
}