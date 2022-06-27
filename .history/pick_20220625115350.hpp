#ifndef PICK_H
#define PICK_H
#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
    private:
    map<int, int> list
public:
    Solution(int n, vector<int>& blacklist) {
        int i = 0;
        for(auto c : blacklist){
            list.emplace({i, c});
        }
    }
    
    int pick() {

    }
};

#endif