#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


class Node{
      public:
      int curlen = 0;
      vector<Node * > vt;
      Node(){
            for(int i = 0; i < 26; i++){
                  vt.emplace_back(nullptr);
            }
      }

      Node * setter(char c){
            if(vt[c-'a'] == nullptr){
                  vt[c-'a'] = new Node();
                  curlen ++;
            }
            return vt[c - 'a'];
      }
};

int minimumLengthEncoding(vector<string>& words) {
      Node * head = new Node();
      string s = "";
      unordered_map<Node *, int> tree;
      for(int w = 0; w < words.size(); w++){
            string word = words[w];
            Node * temp = head;
            for(int i = word.size() - 1 ; i >= 0; -- i ){
                  temp = temp->setter(word[i]);
            }
            tree[temp] = w;
      }
      int ans = 0;
      for(auto [node, id] : tree){
            if(node->curlen == 0){
                  ans += words[id].size();
            }
      }
      return ans;
}