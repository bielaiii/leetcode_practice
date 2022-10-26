#include<iostream>
#include<vector>
using namespace std;

int rec_isBalanced(TreeNode * root){
      if(! root ) return 0;
      if(abs (rec_isBalanced(root->left) - rec_isBalanced(root->right)) < 2){
            return 
      }else{
            return 0;
      }
}


bool isBalanced(TreeNode* root) {

}