#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;


bool checkInclusion(string s1, string s2) {
    vector<int> vt1(26, 0);
    for (auto c : s1) {
        vt1[c - 'a']++;
    }
    int left = 0, right = 0;
    vector<int> temp(26, 0);
    while (right < s2.size()){
        temp[s2[right] - 'a']++;
        right++;
        if (right - left == s1.size()) {
            if (temp == vt1) {
                return 1;
            }
            temp[s2[left]-'a']--;
            left++;
        }
        
    }
    return false;
}