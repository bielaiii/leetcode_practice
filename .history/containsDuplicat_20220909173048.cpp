#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums, int p, int q, int r){
      int l1 = p - q + 1;
      int l2 = r - q ;
      vector<int> left (l1 ,0);
      vector<int> right (l2 ,0);
      for(int i = 0; i < l1 ; i++){
            left[i] = nums[p + i];
      }
      for(int i = 0 ; i < l2; i++){
            right[i] = nums[p + 1 + i];
      }
      
}



void merge_sort(vector<int> &nums, int p, int r ){
      int q = 0;
      if(p < r){
            q = (r + p ) / 2;
            merge_sort(nums, p, q);
            merge_sort(nums, q + 1, r);
            merge(nums, p ,q , r);
      }
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