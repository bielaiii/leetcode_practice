#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;



int smallestDistancePair(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.back() - nums.front();
    while(left <= right){
        int mid = left +  (right - left) / 2;
        int count = 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] - nums[j] > mid  ){
                j ++;
            }
            count += i - j;
        }
        if(count >= k){
            right = mid - 1;
        }else{
            left  = mid + 1;
        }
    }
    return left;
}