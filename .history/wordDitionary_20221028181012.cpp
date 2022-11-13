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
            ;
    }
    
    void addWord(string word) {
            Node * temp = root;
            for(auto c : word){
                  temp->arr[c - 'a'] ++;
                  Node * nextOne = new Node();
                  temp->next = nextOne;
                  temp = temp->next;
            }
    }
    
      bool real_search(string word, Node * node, int idx){
            if(word == "") return 1;
            Node * temp = root;
            char c = word[0];
            if(c == '.'){
                  for(int i = 0; i < 26; i++){
                        if(! node->arr[i]) continue;
                        return real_search(word, node->next, idx + 1);
                  }
            }else{
                  return false;
            }
            return real_search(word, node, idx);
      }


    bool search(string word) {
            
    }
};
