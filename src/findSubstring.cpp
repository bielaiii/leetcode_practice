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
    auto it = map_words.begin();
    int s_len = s.length();
    for(int i = 0; i <= s_len - len_ * size_word; i++){
        for(auto word : words) map_words[word] ++;
        unordered_map<string ,int> temp;
        string sub = s.substr(i, len_ * size_word);
        //cout << sub <<endl;
        for(int j = 0; j < len_ * size_word; j += len_){
            it = map_words.find(sub.substr(j, len_));
            if(it != map_words.end()){
                it->second --;
                if(! it->second)
                    map_words.erase(it->first);
            }else{
                break;
            }
            if(map_words.empty()) ans.push_back(i);
        }
        map_words.clear();
        
    }
    return ans;
}