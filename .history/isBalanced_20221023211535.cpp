#include<iostream>
#include<vector>
using namespace std;

struct balanceNode
{
      int depth = 0;
      bool balanced = 1;
};



int rec_isBalanced(TreeNode * root){
      if(! root ) return 0;
      int ld = rec_isBalanced(root->left);
      int rd = rec_isBalanced(root->right);
      return max(ld, rd) + 1;
}


balanceNode * isBalanced(TreeNode* root) {
     // int ld = 0, rd = 0;
     if(!root) return 1;
      balanceNode * l_node = rec_isBalanced(root->left);
      balanceNode * r_node = rec_isBalanced(root->right);
      if(! l_node->balanced || ! r_node->balanced ){
            return 
      }
}