#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size();
    if(target < nums[0]) return 0;
    //int i = right / 2;
    while(right - left >  1){
        int mid = left + (right - left) / 2;
        if(nums[mid] < target){
            left = mid;
        }else {
            right =  mid;
        }
    }
    //cout << "left : " << left<<endl;
    //cout << "right : " << right << endl;
    return right;
}