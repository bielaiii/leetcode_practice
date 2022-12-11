#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraysDivByK(vector<int>& nums, int k) {
      int sum = 0;
      unordered_map<int, int> mp;
      mp[0] = 1;
      int ct = 0 ;
      for(int i = 0 ; i < nums.size(); i++){
            sum += nums[i];
            if(mp.find((sum % k + k) % k) != mp.end()){
                  ct += mp[(sum % k + k) % k];
            }
            mp[(sum % k + k ) % k] ++;
            
      }
      return ct  ;
}