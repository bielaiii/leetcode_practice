#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <set>
#include <vector>
using namespace std;

int longestNiceSubarray(vector<int>& nums) {

    set<int> st;
    int ans = 0;
    int record = 0;
    for (int i = 0, j = 0; j < nums.size(); j++) {
        while (i < j && (record & nums[j]) != 0) {
            record ^= nums[i];
            i++;
        }
        record |= nums[j];
        ans = max(ans, j - i + 1);
    }
    return ans;
}