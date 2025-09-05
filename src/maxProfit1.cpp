#include <cstdint>
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
int maxProfit(vector<int> &prices) {
    if (prices.size() <= 1) {
        return 0;
    }
    auto sz = prices.size();
    int min_price = INT32_MAX;
    int max_profit = INT32_MIN;
    for (int i = 0; i < sz; i++) {
        max_profit = max(max_profit, prices[i] - min_price);
        min_price = min(prices[i], min_price);
    }
    return max_profit;
}

namespace AAA {
int maxProfit(vector<int> &prices) {
    auto sz = prices.size();
    if (prices.size() <= 1) {
        return 0;
    }
    vector<int> dp0(sz, 0);
    vector<int> dp1(sz, 0);
    dp1[0] = -prices[0];
    int profit = 0;
    for (int i = 1; i < sz; i++) {
        dp0[i] = max(dp0[i - 1], prices[i] + dp1[i - 1]);
        dp1[i] = max(dp0[i - 1] - prices[i], dp1[i - 1]);
    }
    return dp0[sz - 1];
}

} // namespace AAA

namespace BBB {
int maxProfit(vector<int> &prices) {

    auto sz = prices.size();
    if (prices.size() <= 1) {
        return 0;
    }
    vector<int> dp0(sz, 0);
    vector<int> dp1(sz, 0);
    vector<int> dp2(sz, 0);
    vector<int> dp3(sz, 0);

    dp1[0] = -prices[0];
    dp2[0] = -prices[0];

    for (int i = 1; i < sz; i++) {
        dp0[i] = max(dp0[i - 1], dp1[i - 1] + prices[i]);
        dp1[i] = max(dp1[i - 1], -prices[i]);
        dp2[i] = max(dp2[i - 1], dp0[i - 1] - prices[i]);
        dp3[i] = max(dp3[i - 1], prices[i] + dp2[i - 1]);
    }

    return dp3[sz - 1];
}

} // namespace BBB
int main() {
    vector<int> vt{3, 3, 5, 0, 0, 3, 1, 4};
    println("{}", BBB::maxProfit(vt));
    vector<int> vt1{1, 2, 3, 4, 5};
    println("{}", BBB::maxProfit(vt1));
    vector<int> vt2{2, 1, 4};
    println("{}", BBB::maxProfit(vt2));
    return 0;
}
