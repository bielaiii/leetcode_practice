#include<iostream>
#include<vector>
using namespace std;


class node{
    public:
    char val = '\0'  ;
    bool flag = 0;
    node *left =  nullptr;
    node *right = nullptr;
};

class WordFilter {
    private:
    node * inorder = new node();
    node * reverseorder = new node();
public:
    WordFilter(vector<string>& words) {
       inorder->val = '\0';
        for(string word : words){
            for(int i = 0; i < word.size(); i++){
                if(inorder->val == '\0' ){
                    inorder->val = word[i];
                }else if(word[i] < inorder->val &&  inorder->left){
 
                }else if(word[i] > inorder->val &&  inorder->right){

                }
            }
        }
    }
    
    int f(string pref, string suff) {

    }
};

