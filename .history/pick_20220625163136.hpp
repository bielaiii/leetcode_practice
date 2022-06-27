#ifndef PICK_H
#define PICK_H
#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Solution {
    private:
    unordered_map<int, int> list;
    vector<int> avail;
public:
    Solution(int n, vector<int>& blacklist) {
        int i = 0;
        int j = 0;
        int len_ = n - blacklist.size() ;
        set<int> temp_;
        for(auto c : blacklist)
            temp_.inser(c);
        for(; i < n; i++){
            if(i == c){
                avail.insert({c, i});
            }
        }
    }
    
    int pick() {
        return avail[rand() % avail.size()] ;
    }
};

#endif