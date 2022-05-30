#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


bool dfs(int range, int target, int current, int record, unordered_map<int, bool> &map_){
    if(map_.count(current)) return map_[current];
    bool res = false;
    for(int i = 0; i < range; i++){
        if(((record >> i) & 1) == 0){ //check current number is unselected
            if(current + i + 1 >= target){
                res = true;
                break;
            }
            if(!dfs(range, target, current + i + 1, record | i , map_)){
                res = true;
                break;
            }
        }
        
    }
    map_[record] = res;
    return res;
}

bool canIWin(int maxChoosableInteger, int desiredTotal) {
    if((1 + maxChoosableInteger) / 2 * maxChoosableInteger < desiredTotal) return 0;
    unordered_map<int, bool> map_;
    return dfs(maxChoosableInteger, desiredTotal, 0,0, map_);
}

