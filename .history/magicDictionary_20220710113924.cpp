#include<iostream>
#include<vector>
#include<unordered_map>
#include"header.h"
using namespace std;

class MagicDictionary {
    private:
    unordered_map<string, vector<int> > magic_map;
public:
    MagicDictionary() {

    }
    
    void buildDict(vector<string> dictionary) {
        for(auto dict : dictionary){
            vector<int> vec(26, 0);
            for(auto c : dict){
                vec[c -'a'] ++;
            }
            magic_map[dict] = vec;
        }
    }
    bool search(string searchWord) {
        vector<int> cur (26, 0);
        for(auto c : searchWord){
            cur[c - 'a'] ++;
        }
        printer(cur);
        for(auto s : magic_map){
            if(s.first.size() == searchWord.size()){
                int diff = 0;
                vector<int> found = s.second;
                printer(s.second);
                for(int i = 0; i < 26; i++){
                    if(cur[i] != s.second[i]) diff++;
                }
                if(diff == 1) return 1;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */