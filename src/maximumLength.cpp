#include "header.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int maximumLength(string s) {
    map<string, int> mp;
    int ans = -1;
    for (int i = 0; i < s.length(); i++) {
        for (int j = i; j < s.length(); j++) {
            if (s[i] != s[j]) {
                break;
            }
            auto key = s.substr(i, j - i +  1);
            mp[key]++;
            if (mp[key] >= 3) {
                ans = max(ans, static_cast<int>(key.size()));
            }
        }
    
    }
    return ans;
}