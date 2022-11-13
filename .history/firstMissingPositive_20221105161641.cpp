#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
      vector<int> vec (50001, 0);
      int minnum = INT32_MAX;
      for(auto c : nums){
            if(c < 0) continue;
            if(minnum < c) minnum = c;
      }
      for(int i = 1; i < minnum; i++){
            if( ! vec[i]) return i;
      }
      return 0;
}