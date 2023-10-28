#include <functional>
#include<iostream>
#include <numeric>
#include<queue>
#include <vector>
#include<cmath>
using namespace std;


long long pickGifts(vector<int>& gifts, int k) {
    priority_queue<int, vector<int>, less<int>> pq {gifts.begin(), gifts.end()};
    while (!pq.empty() and k) {
        auto cur = pq.top();
        cur = sqrt(cur);
        pq.pop();
        k--;
        pq.push(cur);
    }
    long long sum_ = 0;
    for (; !pq.empty(); pq.pop()) {
        sum_ += pq.top();
    }
    return sum_;
}