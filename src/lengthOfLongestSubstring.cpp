#include <iostream>
#include <string>
#include <sstream>
#include<set>
#include<map>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool checker(map<char, int> mp){
    for (auto m : mp) {
        if (m.second > 1) {
            return true;
        }
    }
    return false;
}

int lengthOfLongestSubstring(string s) {
    int l = 0, r = 0;
    map<char, int> st;
    int maxlen = 0;
    int strlen = 0;
    while (r < s.length()) {
        st[s[r]]++;
        r++;
        while (l < r && st.size() < r - l && checker(st)) {
            st[s[l]]--;
            if (st[s[l]] <= 0) {
                st.erase(st.find(s[l]));
            }
            l++;
        }
        maxlen = max(maxlen, r - l);
    }
    return maxlen;
}