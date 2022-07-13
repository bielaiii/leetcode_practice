#include<iostream>
#include<vector>
using namespace std;


class node{
    public:
    char val  ;
    bool flag = 0;
    node *left;
    node *right;
};

class WordFilter {
    private:
    node * inorder = new node();
    node * reverseorder = new node();
public:
    WordFilter(vector<string>& words) {
       
        for(string word : words){
            for(int i = 0; i < word.size(); i++){
                if(inorder->val == )
            }
        }
    }
    
    int f(string pref, string suff) {

    }
};

