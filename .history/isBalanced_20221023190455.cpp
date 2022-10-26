#include<iostream>
#include<vector>
using namespace std;

bool rec_isBalanced(TreeNode * root, int d){
      if(! root ) return 0;
      
      return abs(lr-rd) < 2 ? 1 : 0;
           
}


bool isBalanced(TreeNode* root) {
      int ld = 0, rd = 0;
      return rec_isBalanced(root, ld, rd);
}