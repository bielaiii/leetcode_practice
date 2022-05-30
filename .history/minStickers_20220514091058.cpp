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
    return dfs(map_, mystickers, target);
}

int dfs(unordered_map<string, int>& map_, vector<vector<int>> &mystickers, string target){
    if(map_.count(target)) return map_[target];
    int min_stickers = 99999, size_ = mystickers.size();
    vector<int> alphabet_ (26,0);
    for(char ch: target){
        alphabet_[ch - 'a'] ++;
    }
    for(int i = 0; i < mystickers.size(); i++){
        if(mystickers[i][target[0] - 'a'] == 0){
            continue;
        }
        string new_target = "";
        for(int j = 0; j < 26; j++){
            if(alphabet_[j] - mystickers[i][j] > 0){
                new_target += string(alphabet_[j] + mystickers[i][j], 'a' + j);
            }
        }
        int temp = dfs(map_, mystickers, new_target);
        if(temp != -1){
            min_stickers = min(min_stickers, 1 + temp);
        }
    }
    map_[target] = (min_stickers == 99999? -1 : min_stickers);
    return map_[target];
}