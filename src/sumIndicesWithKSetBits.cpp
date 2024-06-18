#include <bitset>
#include <iostream>
#include <vector>
using namespace std;


int sumIndicesWithKSetBits(vector<int>& nums, int k) {
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        auto str = bitset<32>(i).to_string();
        int count_one = 0;
        for (const auto c : str) {
            if (c == '1') {
                count_one++;
            }
        
        }
        if (count_one == k) {
            ans += nums[i];
        }
    }
    return ans;
}