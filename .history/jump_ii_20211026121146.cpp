#include<vector>
#include<iostream>
using namespace std;


int jump_ii(vector<int>& nums) {
   int i = 0;
   int step = 0;
   if(nums.size() == 1) return 0;
   while( i < nums.size()){
       int t = 1;
       int max_t = 0;
       int temp = 0;
       for(; t <= nums[i]; t++){
           if(i+t >= nums.size() - 1) return step + 1;
           if(nums[i+t] > temp){
               temp = nums[i+t];
               max_t = t;
           }
       }
      // cout << max_t << endl;
       i += max_t;
       step ++;
       cout << "i: "<<i <<endl;
       cout << "step: "<< step <<endl;
       if( i== nums.size() - 1) return step;
   }
   return step;
}