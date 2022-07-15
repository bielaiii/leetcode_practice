#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
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
        TrieTree * inorder_trie ;//= new TrieTree();
        TrieTree * reverse_trie ;//= new TrieTree();
public:
    WordFilter(vector<string>& words) {
        inorder_trie = new TrieTree();
        reverse_trie = new TrieTree();
        for(int i = 0; i < words.size(); i++){
            inorder_trie->insert(words[i], i);
            reverse(words[i].begin(), words[i].end());
            reverse_trie->insert(words[i], i);
        }
    }
    


    int f(string pref, string suff) {
        reverse(suff.begin(), suff.end());
        set<int> inorder_set = inorder_trie->search(pref) ;
        set<int> reverse_set = reverse_trie->search(suff);
        if(inorder_set.size() == 0 || reverse_set.size() == 0) return -1;
        auto i = inorder_set.rbegin();
        auto j = reverse_set.rbegin();
        while(i != inorder_set.rend() && j != reverse_set.rend()){
            if( *i == * j){
                return *i;
            }else if(*i > *j){
                j ++;
            }else{
                i ++;
            }
        }
        return -1;
    }

};

