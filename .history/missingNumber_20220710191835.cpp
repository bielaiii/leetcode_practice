#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int left = 0, right = nums.size() -1;
    int sz = nums.size() ;
    while(left <= right){
        int idx = (left + right) / 2;
        if(nums[idx] == idx){
            left = idx + 1;
            
        }else{
            right = idx  - 1;
        }
        
    }
    return 0;
}