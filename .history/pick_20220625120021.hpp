#ifndef PICK_H
#define PICK_H
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


class Solution {
    private:
    map<int, int> list;
    vector<int> avail;
public:
    Solution(int n, vector<int>& blacklist) {
        int i = 0;
        int j = 0;
        sort(blacklist.begin(), blacklist.end());
        for(; i < n; i++){
            if(blacklist[j] != i){
                avail.push_back(i);
            }else{
                j ++;
            }
        }
    }
    
    int pick() {
        return avail[rand() % avail.size()] ;
    }
};

#endif