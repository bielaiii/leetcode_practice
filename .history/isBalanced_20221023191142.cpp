#include<iostream>
#include<vector>
using namespace std;

bool rec_isBalanced(TreeNode * root){
      if(! root ) return 1;
      if( ! rec_isBalanced(root->left) || ! rec_isBalanced(root->right)){
            return 0;
      }
      return rec_isBalanced(root->left) && rec_isBalanced(root->right);
      
}


bool isBalanced(TreeNode* root) {
     // int ld = 0, rd = 0;

      return rec_isBalanced(root);
}