#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

struct Node{
      vector<Node *> ch;
      bool end;
      Node():ch(vector<Node *>(26, nullptr )),end(0){};
      Node * & operator[](const char c){
            if(ch[c - 'a'] == nullptr){
                 ch[c - 'a'] = new Node();
            }
            return ch[c - 'a'];
      };
};


class WordDictionary {
      Node * root;
    WordDictionary() {
            root = new Node();
    }
    
    void addWord(string word) {
            Node * temp = root;
            for(auto c : word){
                //temp->ch[c] = new Node();
                  temp = temp->ch[c];
            }
            temp->end = 1;
    }
    
      bool real_search(string word, Node * node, int idx){
            if(idx == word.size()) return node->end;
            Node * temp = node;
            for(int i = idx; i < word.size() ; i++ ){
                  if(word[i] == '.'){
                        for(int j = 0; j < 26; j++){
                              if(temp->ch[j] && real_search(word, temp->ch[j], idx + 1)){
                                    return 1;
                              }
                        }
                        return 0;
                  }else if(temp->ch[word[idx] - 'a'] == nullptr){
                        return 0;
                  }else{
                        temp = temp->ch[idx];
                  }
            }
            return temp->end;
      }


    bool search(string word) {
            return real_search(word, root, 0);
    }
};
