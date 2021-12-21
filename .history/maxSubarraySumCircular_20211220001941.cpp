#include <iostream>
#include<vector>
using namespace std;

int maxSubarraySumCircular(vector<int> &nums){
    int i = 1;
    int sum = nums[0]; 
    while(i < nums.size()){
        sum = max(sum ,nums[i] + sum);
        i ++;
        if()
    }
    return 
}