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
        while(words[i] == words[i+1]) i++;
        if(map_[i] > map_[i+1]){
            return false;
        }
    }
    return true;
}