#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int smallestDistancePair(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;
    while(left < right){
        if(nums[right] - nums[left] <= k){
            right = left + (right - left) / 2;
        }else{
            left = left + (right - left ) / 2;
        }
    }
    cout << left <<" "<< right <<endl;
    return right;
}