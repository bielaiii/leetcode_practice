#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;



bool checkSubarraySum(vector<int>& nums, int k) {
    if(nums.size() < 2) return 0;
      vector<int> prefix(nums.size(), 0);
      prefix[0] = nums[1];
      unordered_map<int, int> mp;
      mp[0] = -1;
      int remainder = 0;
      for(int i = 0; i < nums.size(); i++){
            remainder = (remainder + nums[i]) % k;
            if(mp.count(remainder)){
                  int pos = mp[remainder];
                  if(i - pos >= 2) return 1;
            }else{
                  mp[remainder] = i;
            }
      }
      return false;
}
