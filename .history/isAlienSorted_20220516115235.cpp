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
        while(words[i][j] == words[i+1][j]) j++;
        if(map_[i][j] > map_[i+1][j]){
            return false;
        }
    }
    return true;
}