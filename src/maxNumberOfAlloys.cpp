#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool canProduce(int num, int n, int k, int budget,
                  vector<vector<int>>& composition, vector<int>& stock,
                  vector<int>& cost) {
    for (int machine = 0; machine < k; machine++) {
        unsigned long long sum_ = 0;
        for (int metal = 0; metal < n; metal++) {
            unsigned long long required_ = composition[machine][metal] * (unsigned long long)num;
            if (required_ > stock[metal]) {
                sum_ += (required_ - stock[metal]) * cost[metal];
            }
            if (sum_ > budget) {
                break;
            }

        }
        if (sum_ <= budget) {
            return true;
        
        }
    }
    return false;
}

int maxNumberOfAlloys(int n, int k, int budget,
                      vector<vector<int>>& composition, vector<int>& stock,
                      vector<int>& cost) {
    int left = 0, right = 1e9;
    int mid = 0;
    int ans = 0;
    while (left <= right) {
        mid = (right - left) / 2 + left;
        if (canProduce(mid, n, k, budget, composition, stock, cost)) {
            ans = mid;
            left = mid  + 1;
        } else {
            right = mid - 1;
        }
    
    }

    return ans;
}