#include <cstdint>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int minimumRecolors(string blocks, int k) {
    map<char, int> mp;
    int ans = INT32_MAX;
    for (int left = 0, right = 0; right < blocks.size(); right++) {
        mp[blocks[right]]++;
        if (right - left + 1 >= k) {
            ans = min(ans, mp['W']);
            mp[blocks[left]]--;
            left++;
        }
    }
    return ans;
}

int main() {
    string blocks = "WBBWWBBWBW";
    int k = 7;
    cout << minimumRecolors(blocks, k);
    blocks = "WBWBBBW";
    k = 2;
    cout << minimumRecolors(blocks, k);

    return 0;
};