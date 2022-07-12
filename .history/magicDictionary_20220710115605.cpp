#include<iostream>
#include<vector>
#include<unordered_map>
#include"header.h"
using namespace std;

class MagicDictionary {
    private:
    unordered_map<string, vector<int> > magic_map;
    vector<string> vec;
public:
    MagicDictionary() {

    }
    
    void buildDict(vector<string> dictionary) {
        vec = dictionary;
    }
    bool search(string searchWord) {
        
        for(string s : vec){
            if(s.size() == searchWord.size()){
                
                for(int i = 0; i < searchWord.size(); i++){
                    if(s[i] != searchWord[i]){
                        s[i] = searchWord[i];
cout << s << endl;
                cout << searchWord << endl;
                        if(s == searchWord) return 1;
                    }
                }
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