#include <iostream>
#include<vector>
using namespace std;

int getMaxLen(vector<int>& nums) {
    int p = 0;
    int n = 0;
    int z = 0;
    int len = 0;
    int temp_len = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            len = max(len, temp_len);
            temp_len = 0;
        }else if(nums[i] > 0){
            temp_len ++;
        }else if(nums[i] < 0){
            n ++;
            if(n % 2 == 0){
                temp_len +=2;
            }
        }
    }
    return max(len, temp_len);
}