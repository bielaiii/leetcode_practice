#include <iostream>
#include <map>
#include <vector>
using namespace std;

int findMaxLength(vector<int>& nums)
{

    map<int, int> mp;
    int cnt = 0;
    mp[cnt] = -1;
    int maxLen = 0;
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            cnt++;
        } else {
            cnt--;
        }
        if (mp.count(cnt)) {
            int prev = mp[cnt];
            maxLen = max(maxLen, i - prev);
        } else {
            mp[cnt] = i;
        }

    }
    return maxLen;
}