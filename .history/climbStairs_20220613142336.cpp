#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    vector<int> vec {1,2};
    for(int i = 2; i  < n; i++){
        vec.push_back(vec[i-1] + 1 + vec[i-2]);
    }
    return vec.size();
}