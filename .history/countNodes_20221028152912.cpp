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


int is_exist(TreeNode * root){
      
}

int countNodes(TreeNode* root) {
      if(! root) return 0;
      TreeNode * left = root->left;
      TreeNode * right = root->right;
      int left_depth = 0, right_depth = 0;
      while(left){
            left = root->left;
            left_depth ++;
      }
      while(right){
            right = root->right;
            right_depth ++;
      }
      if(left_depth == right_depth){
            return (2 << right_depth) - 1;
      }
      return 1 + is_exist(root->left) + is_exist(root->right);
}

