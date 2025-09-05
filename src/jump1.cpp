#include <cstdint>
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

int jump(vector<int> &nums) {
    vector<int> dp1(nums.size(), -1);
    dp1[0] = 0;
    // println("{}", dp1);

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1, z = 0; z < nums[i] && j < nums.size(); j++, z++) {
            if (dp1[j] == -1) {
                dp1[j] = dp1[i] + 1;

            } else {

                dp1[j] = min(dp1[i] + 1, dp1[j]);
            }
        }
    }
    // println("{}", dp1);
    return dp1.back();
}

namespace AAA {
int jump(vector<int> &nums) {
    int max_bridge = 0;
    int cur_bridge = 0;
    auto sz = nums.size();
    int step = 0;
    for (int i = 0; i < sz; i++) {
        max_bridge = max(max_bridge, nums[i] + i);
        if (i == cur_bridge) {
            cur_bridge = max_bridge;
            step++;

        }
    }
    return step;
}
} // namespace

int main() {
    vector<int> vt0{2, 3, 1, 1, 4};
    println("{}", AAA::jump(vt0));
    vector<int> vt1{2, 3, 0, 1, 4};
    println("{}", AAA::jump(vt1));
    return 0;
}
