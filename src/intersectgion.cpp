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

vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    // sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    set<int> ans;
    for (auto val : nums1) {
        int l = 0;
        int r = nums2.size();
        while (r - l >= 1) {
            int mid = (r - l) / 2 + l;
            if (nums2[mid] == val) {
                ans.insert(val);
                break;
            } else if (nums2[mid] < val) {
                l = mid + 1;

            } else {
                r = mid;
            }
        }
    }
    return vector<int>(ans.begin(), ans.end());
}

int main() {

    vector<int> nums1{1, 2, 2, 1};
    vector<int> nums2{2, 2};
    println("{}", intersection(nums1, nums2));

    vector<int> nums3{4, 9, 5};
    vector<int> nums4{9, 4, 9, 8, 4};
    println("{}", intersection(nums3, nums4));

    vector<int> nums5{1, 2};
    vector<int> nums6{1, 1};
    println("{}", intersection(nums5, nums6));

    vector<int> nums7{1};
    vector<int> nums8{1};
    println("{}", intersection(nums7, nums8));
    return 0;
}
