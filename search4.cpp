#include<iostream>
#include<vector>
using namespace std;

int search4(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l <= r){
            int mid = l + (r-l) / 2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target ){
                if(nums[mid] > nums[l] && target < nums[r]){
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }else{ //mid > target
                if(nums[mid] > nums[l] && target > nums[l]){
                    r = mid - 1;
                }else{
                    l = mid + 1;
                }
            }
            cout << l << " "<<r <<endl;
        }
        return -1;
}