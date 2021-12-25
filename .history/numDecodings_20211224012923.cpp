#include<iostream>
#include<vector>
using namespace std;


int numDecodings(string s) {
    if(nums.size() < 3) return 0;
    int sum = 0;
    int count = 0;
    for(int i = 2; i < nums.size(); i++){
        if(nums[i] - nums[i-1] == nums[i - 1] - nums[i-2]){
           sum += ++count;
        }else{
            count = 0;
        }
        
    }
    return sum;
}