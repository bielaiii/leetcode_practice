#include <iostream>
#include<vector>
using namespace std;

int getMaxLen(vector<int>& nums) {
    int p = 0;
    int n = 0;
    int len = 0;
    int fn = -99;
    int temp_len = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            p = 0;
            n = 0;
        }else if(nums[i] > 0){
            temp_len ++;
        }else if(nums[i] < 0){
            n ++;
            if(fn != -99) fn = i;
            
        }
        if(n % 2 == 0){
            temp_len +=2;
            fn = -99;
        }
    }
    return max(len, temp_len);
}