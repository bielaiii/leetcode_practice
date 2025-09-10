#include <algorithm>
#include <format>
#include <functional>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

vector<double> medianSlidingWindow(vector<int> &nums, int k) {
    if (k == 0) {
        return {};
    }
    auto sz = nums.size();

    int l = 0;
    int r;

    vector<double> res;
    vector<int> temp;
    multiset<int> lo, hi;
    auto it = nums.begin();
    auto rebalance = [&]() {
        while (lo.size() > hi.size() + 1) {

            auto it = prev(lo.end());

            hi.insert(*it);
            lo.erase(it);
        }
        while (hi.size() > lo.size()) {
            auto it = hi.begin();
            lo.insert(*it);
            hi.erase(it);
        }
    };
    for (r = 0; r < sz; r++) {
        if (lo.empty() || *prev(lo.end()) >= nums[r]) {
            lo.insert(nums[r]);
        } else {
            hi.insert(nums[r]);
        }
        rebalance();

        if (r >= k) {
            int old_val = nums[r - k];
            auto itlo = lo.find(old_val);
            if (itlo == lo.end()) {
                auto ithi = hi.find(old_val);
                if (ithi != hi.end()) {
                    hi.erase(ithi);

                } else {
                }
            } else {
                lo.erase(itlo);
            }
            rebalance();
        }

        if (r >= k - 1) {
            if (k % 2 == 0) {
                double a = *prev(lo.end());
                double b = *hi.begin();
                res.push_back((a + b) / 2);

            } else {
                double a = *prev(lo.end());
                res.push_back(a);
            }
        }
    }
    return res;
}

int main() {
    vector<int> v1{1, 3, -1, -3, 5, 3, 6, 7};
    println("{}", medianSlidingWindow(v1, 3));
    return 0;
}
