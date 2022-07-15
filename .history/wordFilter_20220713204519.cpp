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
        set<int> search(string word){
            TrieNode * cur = root;
            for(auto c : word){
                if(cur->next[c - 'a'] == nullptr){
                    return {};
                }
                cur = cur->next[c - 'a'];
            }
            return cur->ids;
        }
};
class WordFilter {
    private:
        TrieTree * inorder_trie = new TrieTree();
        TrieTree * reverse_trie = new TrieTree();
public:
    WordFilter(vector<string>& words) {
       
        for(int i = 0; i < words.size(); i++){
            TrieTree * start = inorder_trie;
            for(int j = 0; j < words[i].size(); j++){
                
            }
        }
    }
    


    int f(string pref, string suff) {
        string s = pref + '+' + suff;

    }

};

