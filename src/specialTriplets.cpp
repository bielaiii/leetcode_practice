#include <format>
#include <iostream>
#include <map>
#include <numeric>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int specialTriplets(vector<int> &nums) {
    unordered_map<unsigned long long, unsigned long long> count;
    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }
    unsigned long long ans = 0;
    unordered_map<unsigned long long, unsigned long long> prefix_;
    unsigned long long mod = 1e9 + 7;
    for (int num : nums) {
        int val = num * 2;

        int left_ = prefix_[val];

        int right_ = count[val] - left_;
        if (num == 0) {
            right_--;
        }
        ans = (ans + right_ * left_) % mod;
        prefix_[num]++;
    }
    return ans;
}

int main() {

    vector<int> nums{6, 3, 6};
    cout << specialTriplets(nums) << endl;
    return 0;
}
