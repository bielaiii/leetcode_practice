#include <iostream>
#include <map>
#include<vector>
using namespace std;

int captureForts(vector<int>& forts) {
    int ans = 0;
    int left = 0, right = 0;
    while (right < forts.size()) {
        while (left < forts.size() && forts[left] != 0) {
            left++;
        }
        right = left;
        while (right < forts.size() && forts[right] == 0) {
            right++;
        }
        if (right == forts.size()) {
            break;
        }
        if (left > 0 && forts[left - 1] != forts[right]) {
            ans = max(right - left, ans);
        }
        left = right + 1;
    } 
    return ans;
}