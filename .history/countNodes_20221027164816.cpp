#include<iostream>
#include<vector>
using namespace std;

/**
 * Definition for a binary tree node.
*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/* 
int countNodes_r(TreeNode * root){
      if(! root) return 0;
      return 1 + countNodes_r(root->left) + countNodes_r(root->right);
}

int countNodes(TreeNode* root) {  
      if(! root) return 0;
      return 1 + countNodes(root->left) + countNodes(root->right);
}
 */

int countNodes(TreeNode* root) {
      int level = 0;
      TreeNode * left_ = root;
      while(left_){
            left_ = left_->left; level ++;
      }
      
      return countNodes_r(root);
}

