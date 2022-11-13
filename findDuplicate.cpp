#include<iostream>
#include<vector>
using namespace std;


int findDuplicate(vector<int>& nums) {
      vector<int> vec(10000, 0);
      for(auto c : nums){
            if(vec[c] == c) return c ;
            vec[c] = c;
      }
      return 0;
}