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
      if(! root) return 0;
      TreeNode * left = root->left;
      TreeNode * right = root->right;
      while(left) left = root->left;
      while(right) right = root->right;
      

}

int countNodes(TreeNode* root) {
      if(! root) return 0;
      int l_depth = 0;
      int r_depth = 0;
      if(root->left && root->right){
            count
      }
}

