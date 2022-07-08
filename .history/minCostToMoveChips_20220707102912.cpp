#include<vector>
#include<iostream>
using namespace std;

int minCostToMoveChips(vector<int>& position){
    int ans = 0;
    for(int i = 0;i < position.size(); i++){
        if( position[i] % 2){
            ;
        }else{
            ans ++;
        }
    }
    return ans;
}