#include<vector>
#include<iostream>
using namespace std;


bool jump_ii(vector<int>& nums) {
   int i = 0;
   int temp = nums[0];
   int step = 0;
   while( i < nums.size()){
       int max_step = nums[i];
       int temp = 0;
       for(int t = 1; t <= max_step; t++){
           temp = max(nums[i]+t, temp);
       }
       i += temp;
       step ++;
   }
   return step;
}