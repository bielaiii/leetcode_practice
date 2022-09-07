#include<iostream>
#include<vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> target  (26, 0);
    vector<int> temp  (26, 0);
    for(auto c : p) target[c-'a'] ++;
    
    for(int i = 0; i < p.size(); i ++){
        temp[s[i] - ' a'] ++;
    }
    vector<int> ans;
    for(int i = p.size(); i < s.size(); i++){
        if()
    }
    return ans;
}