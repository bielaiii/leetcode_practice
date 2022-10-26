#include<iostream>
#include<vector>
using namespace std;

struct balanceNode
{
      balanceNode(int d, int b):depth(d),balanced(d){};
      int depth = 0;
      bool balanced = 1;
};





balanceNode * rec_isBalanced(TreeNode* root) {
     // int ld = 0, rd = 0;
     if(!root) return nullptr;
      balanceNode * l_node = rec_isBalanced(root->left);
      balanceNode * r_node = rec_isBalanced(root->right);
      if(! l_node->balanced || ! r_node->balanced ){
            return new balanceNode(0,0);
      }
      
}


bool is_Balanced(TreeNode * root){
      return rec_isBalanced(root)->balanced;;
     // return temp->balanced;
}