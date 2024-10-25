#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#include<format>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int sz = cardPoints.size();
    // cardPoints.resize(sz);
    // copy(cardPoints.begin(), cardPoints.begin() + sz, cardPoints.begin() +
    // sz);
    int sum_ = accumulate(cardPoints.begin(), cardPoints.begin() + k, 0);
    int ans = sum_;
    auto conv = [=](int i )
    {
        if (i > 0) {
            return i;
        }
        return (i + sz) % sz;
    };
    for (int l = 0, r = k - 1, i = 0; i < k; i++) {
        sum_ -= cardPoints[r];
        r = conv(r - 1);
        l = conv(l - 1);
        sum_ += cardPoints[l];
        ans = max(ans, sum_);
        //cout << format("{}, {}, {}, {} {} {}\n", l, cardPoints[l], r, cardPoints[r], sum_, ans);
        int b = 0;
    }
    return ans;
}

int main() {
    vector<int> vt;
    vt = {1, 2, 3, 4, 5, 6, 1};
    cout << maxScore(vt, 3) << endl;
    cout << "\n================================\n";
    vt = {2, 2,2};
    cout << maxScore(vt, 2) << endl;
    vt = {9,7,7,9,7,7,9};
    cout << maxScore(vt, 7) << endl;
    vt = {1, 1000, 1};
    cout << maxScore(vt, 1) << endl;

    return 0;
}