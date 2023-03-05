#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> numberOfPairs(vector<int>& nums)
{
      map<int, int> mp;
      for (int num : nums) {
            mp[num]++;
      }
      int ct = 0;
      for (auto & it : mp) {
            ct += it.second / 2;
            it.second = it.second % 2;
      }
      int remain = 0;
      for (auto it : mp) {
            remain += it.second;
      }
      return {ct, remain};
}