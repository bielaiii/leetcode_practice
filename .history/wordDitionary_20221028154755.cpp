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
    
    bool search(string word) {
      Node * temp = root;
      for(auto c: word){
            if(c == '.'){
                  
            }else{
                  if(temp->arr[c - 'a'] > 0){
                        temp = temp->next;
                  }
            }
      }
    }
};
