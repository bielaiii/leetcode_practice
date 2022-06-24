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
    for(auto word : words) map_words[word] ++;
    for(int i = 0; i < s.length() - len_ * size_word; i++){
        unordered_map<string ,int> temp;
        string sub = s.substr(i, len_ * size_word);
        for(int j = 0; j < len_ * size_word; j += len_){
            if(map_words.count(sub.substr(j, len_))){

            }
        }
        for(int j = 0; j < len_ * size_word; j++){

        }
    }
    return ans;
}