#include <algorithm>
#include <iostream>
#include <map>
#include <type_traits>
#include <unordered_map>
#include <vector>
using namespace std;

bool carPooling(vector<vector<int>> &trips, int capacity)
{
    map<int, int> mp;
    for (auto trip : trips) {
        mp[trip[1]] += trip[0];
        mp[trip[2]] -= trip[0];
    }
    auto ct = 0;
    for (auto it : mp) {
        ct += it.second;
        if (ct > capacity) {
            return false;
        }
    }
    return true;
}