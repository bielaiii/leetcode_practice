#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


vector<int> sortedSquares(vector<int>& nums){
    int left = 0, right = nums.size() -1;
    int min = 999;
    int mid = 0;
    
    for(int i=0; i < nums.size(); i++){
        if(abs(min) > abs(nums[i])){
            min = nums[i];
            mid = i;
        }
        nums[i] = abs(nums[i]);
    }
    vector<int> ret;
    left = mid - 1;
    right = mid + 1;
    ret.push_back(pow(nums[mid], 2));
    while(left >= 0 || right < nums.size()){
        if(left < 0){
            ret.push_back(pow(nums[right], 2));
            right ++;
            continue;
        }
        if(right >= nums.size()){
            ret.push_back(pow(nums[left], 2));
            left --;
            continue;
        }
        if(nums[left] <= nums[right]){
            ret.push_back(pow(nums[left], 2));
            left --;
        }else{
            ret.push_back(pow(nums[right], 2));
            right ++;
        }
        
    }
    return ret;
}