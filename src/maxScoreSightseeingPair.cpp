#include<iostream>
#include <vector>
using namespace std;

int maxScoreSightseeingPair(vector<int> &nums){
    int sum = nums[0];
    int max_ = 0;
    for(int i = 0; i < nums.size() ; i++){
       sum = max(sum, max_ + nums[i] - i);
       max_ = max(max_, nums[i] + i);
    }
    return sum;
}