#include <iostream>
#include <map>
#include <print>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
using vt = vector<int>;

int longestSubsequence(vector<int> &arr, int difference) {
    int ans = 0;
    pmr::unordered_map<int, int> mp;
    for (auto i : arr) {
        
        mp[i + difference] = mp[i] + 1;
        ans = max(ans, mp[i+difference]);
    }
    return ans ;
}

int main() {
    vt v1{1,2,3,4};
    vt v2{1,3,5,7};
    vt v3{1,5,7,8,5,3,4,2,1};
    println("{}", longestSubsequence(v1, 1));
    println("{}", longestSubsequence(v2, 1));
    println("{}", longestSubsequence(v3, -2));
    return 0;
}
