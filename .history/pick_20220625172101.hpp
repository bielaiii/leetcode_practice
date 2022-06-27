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
    int len_;
public:
    Solution(int n, vector<int>& blacklist) {
        int i = 0;
        int j = 0;
        len_ = n - blacklist.size() ;
        set<int> temp_;
        for(auto c : blacklist){
            if(c > len_){
                temp_.insert(c);
            }
        }
        for(auto c : blacklist){
            int i = len_;
            if(c < len_){
                while(temp_.count(c)){
                    c++;
                }
                list[c] = i;
            }
        }
    }
    
    int pick() {
        int temp = rand() % len_;
        return list.count(temp) ? list[temp] :temp;
    }
};

#endif