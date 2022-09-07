#include<iostream>
#include<vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    if(p.size() > s.size()) return {};
    vector<int> target  (26, 0);
    vector<int> temp  (26, 0);
    for(auto c : p) target[c-'a'] ++;
    
    for(int i = 0; i < p.size(); i ++){
        temp[s[i] - 'a'] ++;
    }
    vector<int> ans;
    if(temp == target) ans.push_back(0);
    //cout << "size "<< s.size() << endl;
    for(int i = 0; i < s.size() - p.size(); i++){
       // cout << i  + p.size() << endl;
        temp[s[i] - 'a'] --;
        temp[s[i + p.size()] - 'a'] ++;

        if(temp == target) ans.push_back(i + 1);
    }
    return ans;
}