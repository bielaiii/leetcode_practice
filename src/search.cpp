#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size();
    int tg;
    while (l < r) {
        int mid = (r - l) / 2 + l;
        if (nums[mid] == target) {
            return mid;

        } else if (nums[mid] < target) {
            l = mid + 1;

        } else {
            r = mid;
        }
    }
    return -1;
}