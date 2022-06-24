#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;


vector<int> findSubstring(string s, vector<string>& words) {
    //vector<vector<int>> vec(s.length(), vector<int>(s.length(), 0));
    unordered_map<string, int> set_;
    for(auto word : words){
        set_.insert({word,1});
    }
    int j = 0;
    int len_ = words[0].size();
    int size_word = words.size();
    auto it = set_.begin();
    for(int i = 0; i < s.length() - len_ * size_word; i++){
        for(int j = 0; j < len_ * size_word; j++){
            
        }
    }
    
}