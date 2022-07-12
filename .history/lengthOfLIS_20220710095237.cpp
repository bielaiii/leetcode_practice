#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    vector<int> vec(nums.size()+ 1, 0);
    vec[0] = 0;
    vec[1] = 1;
    for(int i =1; i < nums.size(); i++){
        if(nums[i] > nums[i-1]){
            vec[i] = vec[i-1] + 1;
        }else{
            vec[i] = vec[i-1];
        }
    }
    return vec.back();
}