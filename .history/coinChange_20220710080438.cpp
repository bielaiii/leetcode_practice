#include<iostream>
#include<vector>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> vec (amount + 1, 0);
    vec[0] = 0;
    if(! amount ) return 1;  
    for(auto c : coins){
        vec[c] = 1;
    }
    
}