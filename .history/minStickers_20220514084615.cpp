#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

int minStickers(vector<string>& stickers, string target) {
    unordered_map<string, int> map_;
    int size_ = stickers.size();
    vector<vector<int>> mystickers(size_, vector<int>(26,0));
    for(int i = 0; i < stickers.size(); i++){
        for(char ch : stickers[i]){
            mystickers[i][ch - 'a'] += 1;
        }
    }
    map_[""] = 0;
    return 1;
}

int dfs(unordered_map<string, int>& map_, vector<vector<int>> &mystickers, string target){
    if(map_.count(target)) return map_[target];
    int max_ = 99999, size_ = mystickers.size();
    vector<int> alphabet_ (26,0);
    for(char ch: target){
        alphabet_[ch - 'a'] ++;
    }
    for(int i = 0; i < mystickers.size(); i++){
        
    }
}