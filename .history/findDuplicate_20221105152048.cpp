#include<iostream>
#include<vector>
using namespace std;


int findDuplicate(vector<int>& nums) {
      vector<int> vec(nums.size(), 0);
      for(auto c : nums){
            if(!nums[c]) return c;
            nums[c] = c;
      }
      return 0;
}