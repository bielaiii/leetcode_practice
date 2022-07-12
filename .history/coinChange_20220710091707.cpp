#include<iostream>
#include<vector>
using namespace std;




int coinChange(vector<int>& coins, int amount) {
    vector<int> vec (10001, INT16_MAX);
    vec[0] = 0;
    if(! amount ) return 0;  
    for(auto c : coins){
        if(amount == c) return 1;
        vec[c] = 1;
    }
    for(int i =1; i <= amount; i++){
        vector<int> cur (coins.size());
        int mini = INT16_MAX;
        
        for(auto c : coins){
            //cur.push_back((i - c) < 0? INT16_MAX : vec[i-c] );
            mini = min(mini, (i - c) < 0? INT16_MAX : vec[i-c] + 1);
           
        }
        vec[i] = mini;
    }
    return vec[amount] == INT16_MAX ? -1 : vec[amount];
}