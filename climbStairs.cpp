#include<iostream>
#include<vector>
using namespace std;



int climbStairs(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;

    int one = 0;
    int two = 1;
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);
    for(int i = 3; i <= n; i++){
        ans.push_back(ans[one] + ans[two]);
        one++; two++;
    }
    return ans[ans.size() -1];
}