#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


bool dfs(int range, int target, int current, unordered_map<int, bool> & map_, vector<int>& vec_){
    if(current >= target) return 1;
    for(int i = 1; i <= range; i++){
        if(vec_[i]) continue;
        vec_[i] = 1;
        dfs(range, target, current + i , map_, vec_);
        vec_[i] = 0;
    }
    return 0;
}

bool canIWin(int maxChoosableInteger, int desiredTotal) {
    int sum1 = 0;
    int sum2 = 0;
    int max_ = 0;
    unordered_map<int, bool> map_;
    if(desiredTotal < maxChoosableInteger) return 1;
    vector<int> vec_ (maxChoosableInteger + 1, 0);
    
    return dfs(maxChoosableInteger, desiredTotal,0, map_, vec_);
}

