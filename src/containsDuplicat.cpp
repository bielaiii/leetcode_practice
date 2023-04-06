#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums, int p, int q, int r){
      int l1 = q - p + 1;
      int l2 = r - q ;
      vector<int> left (l1 ,0);
      vector<int> right (l2 ,0);
      for(int i = 0; i < l1 ; i++){
            left[i] = nums[p + i];
      }
      for(int i = 0 ; i < l2; i++){
            right[i] = nums[q + 1 + i];
      }
      int i = 0, j = 0;
      while( i < l1 && j < l2){
            if(left[i] < right[j]){
                  nums[p ++] = left[i ++];
            }else{
                  nums[p ++] = right[j ++];
            }
      }
      while(i < l1) nums[p++] = left[i++];
      while(j < l2) nums[p++] = right[j++];
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



/* 
bool containsDuplicate(vector<int>& nums) {
      int find_max = INT16_MIN;
      merge_sort(nums, 0 , nums.size() - 1);

      for(int i = 1; i < nums.size() ; i++){
            if(nums[i] == nums[i - 1]) return true;
      }
      
      return false;
} */