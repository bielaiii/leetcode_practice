#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

bool isAlienSorted(vector<string>& words, string order) {
    unordered_map<char, int> map_;
    for(int i = 0; i < order.size(); i++){
        map_[order[i]] = i ;
    }
    for(int i = 0; i < words.size() - 1; i++){
        int j = 0;
        if(words[i] == words[i+1]) continue;
        while(j < words[i].size() && j < words[i+1].size() && words[i][j] == words[i+1][j]) j++;
        //j = words[i].size() > words[i+1].size() ? words[i+1].size() : words[i].size();
        //if(words[i].size() != words[i+1].size()) continue;
        //if(map_.count[words[i][j]])
        if(j < words[i].size() && words[i+1].size() && map_[words[i][j]] > map_[words[i+1][j]]){
            return false;
        }else if(words[i].size() != words.size()){
            continue;
        }
    }
    return true;
}