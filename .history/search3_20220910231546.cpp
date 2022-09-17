#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums, int target) {
      int start = nums[0] < target ? 0 : nums.size() - 1;
      int step = start ? -1 : 1;
      int ct = 0 ;
      while(1){
            if(nums[start] == target ) return true;
            start += step;
            
            //start %= nums.size() ;
      }
      return false;
}