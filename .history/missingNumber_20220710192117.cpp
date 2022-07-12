#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int left = 0, right = nums.size() -1;
    
    while(left <= right){
        int idx = (left + right) / 2;
        cout << nums[idx ]<< endl;
        if( nums[idx] == idx ){
            left = idx + 1;
        }else{
            right = idx - 1;
        }
        
    }
    return left;
}