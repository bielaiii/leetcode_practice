#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int maxResult(vector<int>& nums, int k)
{
    vector<int> vt(nums.size() + 1, -1);
    vt[0] = nums[0];
    deque<int> q;
    for (int i = 1; i < nums.size(); i++) {
        while (!q.empty() && vt[q.back()] < vt[i - 1]) {
            q.pop_back();
        }
        q.push_back(i - 1);
        while (!q.empty() && i - q.front() > k) {
            q.pop_front();
        }
        vt[i] = vt[q.front()] + nums[i];
    }
    return vt[nums.size() - 1];
}