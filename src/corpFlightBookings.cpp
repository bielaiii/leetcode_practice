#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n) {
    map<int, int> mp;
    for (auto it : bookings) {
        mp[it[0]] += it[2];
        mp[it[1] + 1] -= it[2];
    }    
    vector<int> vt(n, 0);
    int ret = 0;
    auto it = mp.begin();
    for (int i = 0; i < n; i++) {
        if (mp.find(i + 1) != mp.end()) {
            ret += mp[i + 1];
            it++;
        }
        vt[i] += ret;
    }
    return vt;
}