#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void wiggleSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int arr[nums.size()] = {0};
    for(auto num : nums){
        arr[num ]++;
    }
    int end = nums.size() - 1;
    for(int i = 1; i < nums.size(); i+= 2){
        if(! arr[end]){
            end --;
            continue;
        }
        nums[i] = arr[end];
        arr[end] --;
    }
    for(int i = 0; i < nums.size(); i+= 2){
        if(! arr[end]){
            end --;
            continue;
        }
        nums[i] = arr[end];
        arr[end] --;
    }
}
