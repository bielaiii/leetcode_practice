#include "header.h"
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <unordered_set>
using namespace std;

bool checker(map<char, int> mp) {
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

namespace B {
    int lengthOfLongestSubstring(std::string s) {
        if (s.length() < 2) {
            return s.length();
        }
        map<char, int> mp;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]] = i;
            } else {
                auto min_ = min_element(
                    mp.begin(), mp.end(),
                    [](const pair<char, int> p0, const pair<char, int> p2) {
                        return p0.second < p2.second;
                    });
                ans = max(ans, i - min_->second);
                for (int j = min_->second; j <= i; j++) {
                    if (s[j] != s[i]) {
                        mp.erase(s[j]);
                    } else {
                        break;
                    }
                }
                mp[s[i]] = i;
            }
        }
        
        return mp.size() > ans ? mp.size() : ans;
    }

} // namespace B