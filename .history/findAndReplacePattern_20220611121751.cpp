#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool mapstring(string s1, string s2)
{
    unordered_map<char ,char> map_;
    for(int i = 0, j = 0; i < s1.length() && j <s2.length(); i++, j++){
        if(! map_.count(s1[i])){
            map_[s1[i]] = s2[j];
        }else if(map_[s1[i]] != s2[i]){
            return false;
        }
    }
    return true;
}



vector<string> findAndReplacePattern(vector<string>& words, string pattern){
    vector<string> ans;
    for(auto word : words){
        if(mapstring(word, pattern) && mapstring(pattern, word)){
            ans.push_back(word);
        }
    }
    return ans;
}
