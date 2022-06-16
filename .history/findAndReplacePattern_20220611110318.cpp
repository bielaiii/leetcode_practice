#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

void create_map(string s, vector<pair<char, int>>& map_){
    char c = s[0];
    int count = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            count++;
        }else{
            map_.push_back(pair<char, int>(c, count));
            count = 1;
            s[i] = c;
        }
    }
}


vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<pair<char, int>> map_;
    vector<string> vec;
    vector<pair<char ,int>> pattern_map;
    create_map(pattern, pattern_map);
    vector<pair<char ,int>> temp_map;
    for(auto word : words){
        temp_map.clear();
        create_map(word, temp_map);
        if(temp_map.size() != pattern_map.size()) continue;
        auto i = temp_map.begin(), j = pattern_map.begin();
        for( ; i != temp_map.end(), j != pattern_map.end() ; i++,j++ ){
            cout << i->second <<" " << j->second <<endl;
            if(i->second != j->second) break;
        }
        if(i == temp_map.end() && j == pattern_map.end()) vec.push_back(word);
        
    }
    return vec;
}