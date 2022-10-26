#include<iostream>
#include<vector>
using namespace std;

struct balanceNode
{
      balanceNode(int d, int b):depth(d),balanced(d){};
      int depth = 0;
      bool balanced = 1;
};

int rec_isBalanced(TreeNode* root) {
     // int ld = 0, rd = 0;
      if(!root) return 0;
      int ld = rec_isBalanced(root->left);
      int rd = rec_isBalanced(root->right);
      if(ld >= 0 && rd >= 0 && abs(rd - ld) < 2){
            return max(ld, rd) + 1;
      }
      return -1;
      
}


bool isBalanced(TreeNode * root){
      return rec_isBalanced(root);
     // return temp->balanced;
}