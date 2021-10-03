#include<iostream>
#include<vector>
using namespace std;

int recur(int time, int &step){
    if(time >= 2){
        recur(time-2, step+=1);
        recur(time-1, step+=1);
    }else if(time == 1){
        return 1;
    }else{
        return 0;
    }

}

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