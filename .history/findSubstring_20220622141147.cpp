#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;


vector<int> findSubstring(string s, vector<string>& words) {
    //vector<vector<int>> vec(s.length(), vector<int>(s.length(), 0));
    unordered_map<string, int> map_s;
    unordered_map<string, int> map_words;
    vector<int> ans;
    int len_ = words[0].size();
    int size_word = words.size();
    
    for(int i = 0; i < s.length() - len_ * size_word; i++){
        for(auto word : words){
            map_words[word] ++;
        }
        for(auto word : words){
            map_s[word] --;
        }

        for(int j = 0; j < len_ * size_word; j++){

        }
    }
    
}