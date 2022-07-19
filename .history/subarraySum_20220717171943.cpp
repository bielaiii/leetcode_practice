#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
      unordered_map<int, int> mp;
      int count = 0;
      mp[0] = 1;
      int cul = 0;
      for(auto i : nums){
            cul += i;
            if(mp.count(cul - k)){
                  count += mp[cul - k];
               //   mp[i - k] ++;
            }
            mp[cul] ++;
          //  mp[i - k] ++;
      }
     
      return count;

}