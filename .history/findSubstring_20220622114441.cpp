#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;


vector<int> findSubstring(string s, vector<string>& words) {
    vector<vector<int>> vec(s.length(), vector<int>(s.length(), 0));
    unordered_map<string, int> set_;
    for(auto word : words){
        set_.insert({word,1});
    }
    int j = 0;
    for(int i = 1; i < s.length(); i++){
        if((auto it = set_.find(s.substr(j, i - j)))){
            it
            j = i + 1;
        }else{

        }
    }
}