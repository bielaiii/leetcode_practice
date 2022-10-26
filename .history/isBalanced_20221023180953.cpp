#include<iostream>
#include<vector>
using namespace std;

bool rec_isBalanced(TreeNode * root, int ld ,int rd){
      if(! root ) return 0;
      if(root->left) ld ++;
      if(root->right) rd ++;
      if(abs (rec_isBalanced(root->left, ld, rd) - rec_isBalanced(root->right, ld, rd)) < 2){
            return 1;
      }
      return 0;
}


bool isBalanced(TreeNode* root) {
      int ld = 0, rd = 0;
      return rec_isBalanced(root, ld, rd);
}