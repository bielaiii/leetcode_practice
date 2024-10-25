#include <format>
#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> vt{-1, -1};
    auto lowerBound = [&nums](int target) -> int {
        int l = 0, r = nums.size();
        for (; l < r;) {
            int mid = (r - l) / 2 + l;
            if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return l;

        
    };
    auto upperBound = [&nums](int target) -> int {
        int l = 0, r = nums.size();
        for (; l < r;) {
            int mid = (r - l) / 2 + l;
            if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid;
            }
        }
        return l;
    };
    int l = lowerBound(target);
    if (l == nums.size() || nums[l] != target) {
        l = -1;
    }
    int r = upperBound(target + 1);
    if (r == nums.size() || nums[r] != target) {
        r = -1;
    }
    return {l, r};
}

int main() {
    vector<int> vt{5, 7, 7, 8, 8, 10};
    vector<int> ans = searchRange(vt, 8);
    cout << format("{}, {}\n", ans[0], ans[1]);
    ans = searchRange(vt, 6);
    cout << format("{}, {}\n", ans[0], ans[1]);
    vt = {};
    ans = searchRange(vt, 0);
    cout << format("{}, {}\n", ans[0], ans[1]);

    vt = {1};
    ans = searchRange(vt, 1);
    cout << format("{}, {}\n", ans[0], ans[1]);
    return 0;
}