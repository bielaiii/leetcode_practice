#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
      vector<int> vec (nums.size(), 0);
      for(int &n : nums){
            if(n < 0){
                  n = nums.size() + 1;
            }
      }
      for(int n : nums){
            if()
      }
      
      return 0;
}