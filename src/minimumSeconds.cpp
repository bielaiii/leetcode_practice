#include <map>
#include <vector>
using namespace std;

int minimumSeconds(vector<int>& nums)
{
    map<int, vector<int>> mp;
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }
    int ans = nums.size();
    int n = nums.size();
    for (auto& [k, v] : mp) {
        int mx = 0; // v[0] + n - v.back();
        for (int i = 1; i < v.size(); i++) {
            mx = max(mx, v[i] - v[i - 1]);
        }
        mx = max(mx, n - (v.back() - v[0]));
        ans = min(ans, mx / 2);
    }
    return ans;
}