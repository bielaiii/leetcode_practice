#include<iostream>
#include<vector>
using namespace std;
//vector<int> vec= {1,2,4,2,1,};
int singleNumber(vector<int>& nums) {
    int c = 0, r = 0;
    for(c = 0; c < nums.size() ; c++){
        for(r = c+1; r < nums.size(); r++){
            if(nums[c] == nums[r]){
                int temp = nums[c+1];
                nums[c+1] = nums[r];
                nums[r] = temp;
            }
        }
    }
    return nums[nums.size()-1];
}