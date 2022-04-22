#include<iostream>
#include<vector>
using namespace std;


int minSubArrayLen(int target, vector<int>&nums ){
    int len_ = 1 ;
    int sum = nums[0];
    for(int i = 1; i < nums.size() ; i++){
        if(sum + nums[i] < nums[i-1] + nums[i]){
            sum = nums[i-1] + nums[i];
            len_ = 2;
        }else{
            
        }
    }
    return sum>= target? len_ : 0;
}