#include <format>
#include <iostream>
#include <map>
#include <print>
#include <queue>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include<stack>
using namespace std;
int maximumDifference(const vector<int> &nums) {
    int ret = -1;
    int last = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > last) {
            ret = max(ret, nums[i] - last );
        } else {
            last = nums[i];
        }
       
    }
    return ret;
}

int main() {
    vector<int> vec1 = {7, 1, 5, 4};
    vector<int> vec2 = {9, 4 , 3, 2};
    vector<int> vec3 = {1,5,2,10};
    cout << maximumDifference(vec1) << endl;
    cout << maximumDifference(vec2) << endl;
    cout << maximumDifference(vec3) << endl;
    return 0;
}
