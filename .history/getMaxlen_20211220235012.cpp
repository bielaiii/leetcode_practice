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
            fn = -99;
        }else if(nums[i] > 0){
            temp_len ++;
        }else if(nums[i] < 0){
            n +=2;
            if(fn != -99) fn = i;
        }
        if(n % 2 == 0){
            len = max(p + n, len);
        }else{
            len = max(len, i - fn);
        }
    }
    return len;
}