#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
      vector<int> vec (50001, 0);
      for(auto c : nums){
            vec[c] = c;
      }
      for(int i = 0; i < vec.size(); i++){
            if( ! vec[i]) return i;
      }
      return 0;
}