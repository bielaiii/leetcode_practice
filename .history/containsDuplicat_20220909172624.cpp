#include<iostream>
#include<vector>
using namespace std;

void merge_sort(vector<int> &nums, int p, int r ){
      int q = 0;
      if(p < r){
            q = (r + p ) / 2;
            merge(nums, p ,q, r);
            merge(nums, p ,q, r);
      }
}



void merge(vector<int> &nums, int p, int q, int r){

}

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