#include<iostream>
#include<vector>
using namespace std;


class Trie{
    public:
        bool flag = 0;
        Trie * next[26] = {nullptr};
};

class WordFilter {
    private:
        Trie * inorder_trie = new Trie();
public:
    WordFilter(vector<string>& words) {
       
        for(string word : words){
            Trie * start = inorder_trie;
            for(int i = 0; i < word.size(); i++){
                if(start->next[word[i] - 'a'] == nullptr)
                    start->next[word[i] - 'a'] = new Trie();
                start = start->next[word[i] - 'a'];
                if(i == word.size() - 1){
                    start->flag = 1;
                }
            }
        }
    }
    
    int f(string pref, string suff) {

    }

};

