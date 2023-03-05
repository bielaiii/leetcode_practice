#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace  std;

//

bool checkMap(unordered_map<char, int> mp, int target) {
      for (auto it : mp) {
            if (it.second > target) return 0;
      }
      return 1;
}

int balancedString(string s)
{
      unordered_map<char, int> ump;
      unordered_map<char, int> diff;
      int left = 0;
      int right = 0;
      int target = s.size() / 4;
      int minLen = INT32_MAX;
      for (char c : s) {
            ++diff[c];
      }
      if (diff['Q'] == target && diff['W'] == target && diff['E'] == target && diff['R'] == target) return 0;
      for (left = 0, right = 0; left < s.size(); left++) {
            while (right < s.size() && ! checkMap(diff, target)) {
                  if (diff.find(s[right]) != diff.end()) {
                        --diff[s[right]];
                  }
                  ++right;
            }
            if (! checkMap(diff, target)) break;
            minLen = min(minLen, right - left);
            if (diff.find(s[left]) != diff.end()) {
                  diff[s[left]]++;
            }
      }
      return minLen ;
}