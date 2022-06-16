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
        int mid = left + (right - left) / 2;
        if(nums[right] - nums[left] <= k){
            right =mid;
        }else{
            left = mid;
        }
    }
    cout << left <<" "<< right <<endl;
    return right;
}