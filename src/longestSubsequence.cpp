#include <concepts>
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

int longestSubsequence(string s, int k) {
    int i = s.length() - 1;
    int len = 0;
    unsigned long long val = 0;
    int idx = 0;

    while (i >= 0) {
        if (s[i] == '1') {
            if (idx >= 30) {
                
            } else if ((val + (1ull << idx)) <= k) {
                len++;
                val += 1 << idx;
            }
        } else if (s[i] == '0') {
            len++;
        }
        idx++;
        i--;
    }
    return len;
}

int main() {
    cout << longestSubsequence("1001010", 5) << endl;
    cout << longestSubsequence("00101001", 5) << endl;
    return 0;
}
