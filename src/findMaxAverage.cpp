#include <algorithm>
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double ans = INT32_MIN;
    double temp = 0;
    for (int l = 0, r = 0; r < nums.size(); r++) {
        temp += nums[r];
        if (r - l + 1 >= k) {
            ans = max(ans, temp);
            temp -= nums[l];
            l++;
        }
    }
    return ans / k;
}