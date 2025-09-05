#include <cstdint>
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

int maxDifference(string s) {
    map<char, int> mp;
    for (auto &c : s) {
        mp[c]++;
    }
    int max_odd = INT32_MIN;
    int min_even = INT32_MAX;
    for (auto &[k, v] : mp) {
        if (v % 2 == 0) {
            min_even = min(min_even, v);

        } else {
            max_odd = max(max_odd, v);
        }
    }
    return max_odd - min_even;
}

int maxDifference(string s, int k) {
    int l = 0, r = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < s.size(); i++) {
        if (r - l > k) {

            mp[s[l]]--;

        } else {
        }
    }
}

int main() {
    return 0;
}
