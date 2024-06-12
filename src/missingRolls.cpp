#include "header.h"
#include <algorithm>
#include <numeric>
#include<vector>
using namespace std;


std::vector<int> missingRolls(std::vector<int>& rolls, int mean, int n)
{
    int sz = rolls.size();
    int sum = accumulate(rolls.begin(), rolls.end(), 0, std::plus<int>());
    if ((sum + n * 6 ) / (n + sz) < mean  ) {
        return {};
    } else if ((sum + n * 1 ) / (n + sz) > mean ) {
        return {};
    }
    vector<int> ans(n);
    int avg = mean * (sz + n) - sum;
    avg /= n;
    if (avg == 0) {
        return {};
    }
    fill_n(ans.begin(), n, avg);
    int remain = mean * (sz  + n) - avg * n - sum;
    for (auto & v : ans) {
        if (remain) {
            v += 1;
            remain--;
        }
    }
    return ans;
}