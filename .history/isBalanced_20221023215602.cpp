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
      if(!root) return ;
      
}


bool is_Balanced(TreeNode * root){
      return rec_isBalanced(root)->balanced;;
     // return temp->balanced;
}