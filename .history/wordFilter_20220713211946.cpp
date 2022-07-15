#include<iostream>
#include<vector>
#include<vector>
#include<algorithm>
using namespace std;


class TrieNode{
    public:
        vector<int> ids;
        bool isValid = 0;
        TrieNode * next;//[26] = {nullptr};
        TrieNode(){
            isValid = 0;
            ids.clear();
            next = new TrieNode[26];
        }
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
            for(char c : s){
                if(cur->next[c - 'a'] == nullptr){
                    cur->next[c - 'a'] = new TrieNode();
                }
                cur = cur->next[c - 'a' ];
                cur->ids.push_back(id);
            }
        }
        vector<int> search(string word){
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
            string temp = words[i];
            inorder_trie->insert(words[i], i);
            reverse(temp.begin(), temp.end());
            reverse_trie->insert(temp, i);
        }
    }
    


    int f(string pref, string suff) {
        reverse(suff.begin(), suff.end());
        vector<int> inorder_vector = inorder_trie->search(pref) ;
        vector<int> reverse_vector = reverse_trie->search(suff);
        if(inorder_vector.size() == 0 || reverse_vector.size() == 0) return -1;
        int i = inorder_vector.size() - 1;
        int j = reverse_vector.size() - 1;
        while(i >= 0 && j >= 0){
            if( inorder_vector[i] ==  reverse_vector[j]){
                return inorder_vector[i];
            }else if(inorder_vector[i] > reverse_vector[j]){
                i --;
            }else{
                j --;
            }
        }
        return -1;
    }

};

