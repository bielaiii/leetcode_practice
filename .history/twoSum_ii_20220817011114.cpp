#include <iostream>
#include <vector>
using namespace std;

int bianrySearch_twosum(const vector<int> &nums, const int target){
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

vector<int> twoSum(vector<int>& numbers, int target) {
    for(int number : numbers){
        if(binarySearch_twosum(number, target - number) != -1){
            return {number, target - number};
        }
    }
}