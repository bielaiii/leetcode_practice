#include<iostream>
#include<vector>
#include<algorithm>
#include"header.h"
using namespace std;

int minArray(vector<int> &nums){
    int id = 0;
    while(id < nums.size() - 1 && nums[id] < nums[id + 1]) id ++;
    cout << nums[id] <<endl;
    reverse(nums.begin(), nums.begin() + id);
    reverse(nums.begin() + id + 1, nums.end());
    reverse(nums.begin(), nums.end());
    printer(nums);
    return nums[0];
}