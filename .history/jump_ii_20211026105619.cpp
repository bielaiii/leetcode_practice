#include<vector>
#include<iostream>
using namespace std;


bool jump_ii(vector<int>& nums) {
   int i = 0;
   int step = 0;
   while( i < nums.size()){
       int t = 1;
       int max_t = 0;
       int temp = 0;
       for(; t <= nums[i]; t++){
           if(nums[i] + t > temp){
               temp = nums[i]+ t;
               t = max_t;
           }
       }
       i += max_t;
       step ++;
   }
   return step;
}