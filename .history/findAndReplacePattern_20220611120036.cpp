#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
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
            c = s[i];
        }
    }
    //map_.push_back(pair<char, int>(c, count));
    printer_pair(map_);
}


vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    
}