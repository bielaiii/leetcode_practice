#include<iostream>
#include<vector>
#include<set>
using namespace std;


class TrieNode{
    public:
        set<int> ids;
        bool isValid = 0;
        TrieNode * next[26] = {nullptr};
        
};

class TrieTree{
    private:
        TrieNode * root ;

    public:
        TrieTree(){
           root = new TrieNode();
        }
        void insert(string s, int id){
            TrieNode * cur = root;
            for(auto c : s){
                if(cur->next[c - 'a'] == nullptr){
                    cur->next[c - 'a'] = new TrieNode();
                }
                cur = cur->next[c - 'a' ];
                cur->ids.emplace(id);
            }
        }
}

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
                start->ids.emplace(i);
            }
        }
    }
    


    int f(string pref, string suff) {
        string s = pref + '+' + suff;

    }

};

