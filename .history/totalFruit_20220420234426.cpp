#include <iostream>
#include <vector>
#include <map>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int left = 0;
    int right = 0;
    map<int,int> map_;
    map_.insert({fruits[0], 1});
    for(int i = 1; i < fruits.size(); i++){
        if(map_.size() < 3){
            if(map_.count(fruits[i])){
                map_[fruits[i]] ++;
            }else{
                map_.insert({fruits[0], 1});
            }
        }else{
            map_.erase(fruits[left]);
            map_.insert({fruits[i], 1});
            left++;
        }
    }
    int len = 0;
    for(auto it = map_.begin(); it != map_.end(); it ++){
        len += it->second;
    }
    return len;
}