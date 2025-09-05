#include <cstdint>
#include <cstdlib>
#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
int maxAdjacentDistance(vector<int> &nums) {
    nums.push_back(nums[0]);
    int max_diff = INT32_MIN;
    for (int i = 1; i < nums.size(); i++) {
        max_diff = max(max_diff, abs(nums[i] - nums[i - 1]));
    }
    return max_diff;
}

int main() {
    vector<int> vt1 {1, 2, 4};
    vector<int> vt2 {-5, -10, -5};
    //vector<int> vt3 {1, 2, 4};
    cout << maxAdjacentDistance(vt1) << endl;
    cout << maxAdjacentDistance(vt2) << endl;
    return 0;
}
