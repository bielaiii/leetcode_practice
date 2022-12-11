#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int longestOnes(vector<int>& nums, int k) {
    int l = 0 , r = 0;
    int maxlen = 0;
    while(r < nums.size()){
        if(nums[r] == 0) k --;
        r ++;
        while(k < 0){
            if(nums[l] == 0) k++;
            l ++;
        }
        maxlen = max(maxlen, r - l);
    }
    return maxlen;
}