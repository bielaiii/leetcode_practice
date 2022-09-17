#include<iostream>
#include<vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
      int find_max = INT16_MIN;
      for(auto num : nums){
            if(find_max < num) find_max = num;
      }
      vector<int> vec(find_max + 1, -1);
      for(auto num : nums){
            if(vec[num] == -1){
                  vec[num] = num;
            }else{
                  return true;
            }
      }
      return false;
}