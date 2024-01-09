#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int maximizeSum(vector<int>& nums, int k) {
    priority_queue pq (nums.begin(), nums.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < k; i++) {
        int temp = pq.top();
        pq.pop();
        ans += temp;
        pq.push(temp + 1);
    }
    return ans;
}
