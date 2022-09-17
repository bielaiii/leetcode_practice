#include<iostream>
#include<vector>
using namespace std;


void merge_soet

bool containsDuplicate(vector<int>& nums) {
      int find_max = INT16_MIN;
      for(auto num : nums){
            if(find_max < num) find_max = num;
      }
      vector<int> vec(find_max + 1, -1);
      for(auto num : nums){
            if(vec[num] == num){
                  return false;
            }else{
                  vec[num] = num;
            }
      }
      return true;
}