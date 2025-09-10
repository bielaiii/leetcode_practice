#include <algorithm>
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int characterReplacement(string s, int k) {
    int r = 0;
    int l = 0;
    int sz = s.size();
    vector<int> vt(26, 0);
    int mx = 0;
    int ans = 0;
    while (r < sz) {
        vt[s[r] - 'A']++;
        mx = max(mx, vt[s[r] - 'A']);
        int len_ = r - l + 1;
        while (len_ - mx > k) {
            vt[s[l] - 'A']--;
            l++;
            len_ = r - l + 1;
        }
        ans = max(len_, ans);
        r++;
    }
    return ans;
}

int main() {

    string s1= "ABAB";
    int i1 = 2;
    println("{}", characterReplacement(s1, i1));
    string s2= "AABABBA";
    println("{}", characterReplacement(s2, 1));
    return 0;
}
