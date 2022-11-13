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

public:
      Node * root;
    WordDictionary() {
            root = new Node();
    }
    
    void addWord(string word) {
            Node * temp = root;
            for(auto c : word){
                  temp = temp->ch[c];
            }
            temp->end = 1;
    }
    
      bool real_search(string word, Node * node, int idx){
            if(idx == word.size()) return 1;
            Node * temp = root;
            
      }


    bool search(string word) {
            
    }
};
