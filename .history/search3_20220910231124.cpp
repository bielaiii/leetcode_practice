#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int>& nums, int target) {
      int start = nums[0] < target ? 0 : nums.size() - 1;
      int step = start ? -1 : 1;
      
}