#include<iostream>
#include<vector>
using namespace std;

int rec_isBalanced(TreeNode * root){
      if(! root ) return 0;
      int ld = rec_isBalanced(root->left);
      int rd = rec_isBalanced(root->right);
      return max(ld, rd) + 1;
}


bool isBalanced(TreeNode* root) {
     // int ld = 0, rd = 0;
     if(!root) return 1;
      int ld = rec_isBalanced(root->left);
      int rd = rec_isBalanced(root->right);
      return abs(ld - rd ) < 2 ? 1: 0;
}