#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

struct Node{
      vector<Node *> ch;
      bool end;
      Node():ch(vector<Node *>(26, nullptr )),end(0){};
      /* Node * & operator[](const char c){
            if(ch[c - 'a'] == nullptr){
                 ch[c - 'a'] = new Node();
            }
            return ch[c - 'a'];
      }; */
      ~Node(){
            for(auto & c : ch){
                  delete c;
            }
      }
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
                  if(! temp->ch[c - 'a'])
                       temp->ch[c -'a'] = new Node();
                  temp = temp->ch[c -'a'];
            }
            temp->end = 1;
    }
    
      bool real_search(const string word, Node * node, int idx){
           // if(! node) return false;
            if(idx == word.size()) return node->end;
            Node * temp = node;
            if(word[idx] == '.'){
                  for(auto c : node->ch){
                        if(! c ) continue;
                        if(real_search(word, c , idx + 1 )){
                              return 1;
                        }
                  }
            }else{
                  return real_search(word, temp->ch[word[idx] -'a'], idx + 1);
            }
            return false;
      }


    bool search(string word) {
            return real_search(word, root, 0);
    }
};

