#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool checkString(string s1, string s2)
{
    unordered_map<char ,char> map_;
    for(int i = 0, j = 0; i < s1.length() && j <s2.length(); i++, j++){
        if(map_.count(s1[i])){
            map_[s1[i]] = s2[i];
        }else if(map_[s1[i]] != s2[i]){
            return false;
        }
    }
    return true;
}

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
    
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern){
    vector<string> ans;
    for(auto word : words){
        if(checkString(word, pattern) && checkString(pattern, word)){
            ans.push_back(word);
        }
    }
    return ans;
}
