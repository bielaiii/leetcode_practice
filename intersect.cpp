#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      map<int, int> mp1;
      map<int, int> mp2;
      for (auto num : nums1) {
            mp1[num]++;
      }
      for (auto num : nums2) {
            mp2[num]++;
      }
      vector<int> vt;
      for (auto it : mp1) {
            if(mp2.find(it.first) != mp2.end()){
                  int min_ct = min(mp2[it.first], it.second);
                  for(int i = 0; i < min_ct; i++){
                        vt.push_back(it.first);
                  }
            }
      }
      return vt;
}