#include <iostream>
#include <vector>
#include <map>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int left = 0;
    int right = 0;
    map<int,int> map_;
    int len = 0;
    for(int i = 1; i < fruits.size(); i++){
        if(map_.size() < 3){
            if(map_.count(fruits[i])){
                map_[fruits[i]] ++;
            }else{
                map_.insert({fruits[i], 1});
            }
        }else{
            len = max(len, map_.begin()->second + (map_.begin() + 1)->seoncd);
        }
    }
    return len;
}