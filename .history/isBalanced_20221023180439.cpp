#include<iostream>
#include<vector>
using namespace std;

int rec_isBalanced(TreeNode * root, int ld ,int rd){
      if(! root ) return 0;

      if(abs (rec_isBalanced(root->left, ld, rd) - rec_isBalanced(root->right, ld, rd)) < 2){
            return 
      }else{
            return 0;
      }
}


bool isBalanced(TreeNode* root) {
      return 
}