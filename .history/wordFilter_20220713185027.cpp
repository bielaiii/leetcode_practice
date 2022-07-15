#include<iostream>
#include<vector>
using namespace std;


class Trie{
    public:
        int id = -1;
        Trie * next[27] = {nullptr};
};

class WordFilter {
    private:
        Trie * inorder_trie = new Trie();
public:
    WordFilter(vector<string>& words) {
       
        for(int i = 0; i < words.size(); i++){
            Trie * start = inorder_trie;
            for(int j = 0; j < words[i].size(); j++){
                if(start->next[words[i][j] - 'a'] == nullptr)
                    start->next[words[i][j] - 'a'] = new Trie();
                start = start->next[words[i][j] - 'a'];
                start->id = i;
            }
        }
    }
    
    int f(string pref, string suff) {
        string s = pref + '+' + suff;
        
    }

};

