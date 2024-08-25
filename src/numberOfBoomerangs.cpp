#include "header.h"
#include <cmath>
#include <map>
using namespace std;

int numberOfBoomerangs(vector<vector<int>>& points)
{
    int ans = 0;
    for (const auto& p0 : points) {
        map<int, int> mp; 
        for (const auto &p1 : points) {
            auto temp = pow(p0[0] - p1[0], 2) + pow(p0[1] - p1[1], 2);
            mp[temp]++;
        }
        for (auto [k , v] : mp) {
            ans += v * (v - 1);
        
        }
    }
    return ans;
}