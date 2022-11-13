#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Node{
      public:
      int arr[26] = {0};
      Node * next;
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
    
      bool real_search(string word, Node * node){
            if(word == "") return 1;
            Node * temp = root;
            char c = word[0];
            if(c == '.'){
                  
            }else{
                  return false;
            }
            return search()
      }


    bool search(string word) {
            
    }
};
