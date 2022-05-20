#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int minMove2(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int mid = 0;
    if(nums.size() / 2 ){
        mid = nums[nums.size() / 2] ;
    }else{
        mid = (nums[nums.size() / 2 ] + nums[nums.size() - 1] ) / 2;
    }
    int count = 0;
    for(auto &i : nums){
        count += abs(i - mid);
    }
    return count;
}