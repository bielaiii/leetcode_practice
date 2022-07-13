#include<iostream>
#include<vector>
using namespace std;


class Trie{
    public:
        bool flag = 0;
        Trie * next[26];
};

class WordFilter {
    private:
        Trie * inorder_trie = new Trie();
public:
    WordFilter(vector<string>& words) {
        for(string word : words){
            if
        }
    }
    
    int f(string pref, string suff) {

    }

};

