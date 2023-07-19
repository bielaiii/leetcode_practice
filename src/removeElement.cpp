#include <iostream>
#include <utility>
#include <vector>
using namespace std;


int removeElement(vector<int> &nums, int val) {
    int l = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[l] = nums[i];
            
            l++;
        }
    }
    return l;
}