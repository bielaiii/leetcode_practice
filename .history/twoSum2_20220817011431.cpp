#include <iostream>
#include <vector>
using namespace std;

int binarySearch_twosum(const vector<int> &nums, const int target){
    int head = 0;
    int tail = nums.size() - 1;
    while(head < tail){
        int mid = (tail +  head ) / 2;
        if(nums[mid] < target){
            head = mid + 1;
        }else if(nums[mid] == target){
            return target;
        }else{
            tail = mid -1;
        }
    }
    return -1;
}

vector<int> twoSum2(vector<int>& numbers, int target) {
    for(int number : numbers){
        if(target < number) return {};
        if(binarySearch_twosum(numbers, target - number) != -1){
            return {number, target - number};
        }
    }
    return {};
}