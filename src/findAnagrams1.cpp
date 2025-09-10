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

vector<int> findAnagrams(string s, string p) {
    auto sz = s.size();
    int l = 0;
    int r = 0;
    vector<int> vt(26, 0);
    vector<int> default_(26, 0);
    for (auto c : p) {
        default_[c - 'a']++;
    }

    vector<int> ans;
    int plen = p.size();
    while (r < sz) {
        vt[s[r] - 'a']++;
        int len_ = r - l + 1;
        if (len_ == plen) {
            if (vt == default_) {
                ans.push_back(l);
            }
            vt[s[l] - 'a']--;
            l++;
        }
        r++;
    }
    return ans;
}

int main() {

    string s = "cbaebabacd";
    string  p = "abc";
    println("{}", findAnagrams(s, p));
    
    

    string s1 = "abab";
    string  p1 = "ab";
    println("{}", findAnagrams(s1, p1));
    return 0;
}
