#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

int minStickers(vector<string>& stickers, string target) {
    unordered_map<char, int> map_;
   // unordered_map::iterator it;
    for(int i = 0; i < stickers.size(); i++){
        //string  tmp = stickers[i];
        for(int j = 0; j < stickers[i].size(); j++){
            auto it = map_.find(stickers[i][j]);
            if(it == map_.end()){
                it->second += 1;
            }else{
               // it->second = 0;
               map_[stickers[i][j]] = 0;
            }
        }
    }
  //  unordered_map<char, int> target_;
    for(int i = 0; i < target.length(); i++){
        auto it = map_.find(target[i]);
        if(it == map_.end()){
            return -1;
        }else{
            map_[target[i]] --;
            if(map_[target[i]] < 1) return 0;
        }
    }
    return 1;
}