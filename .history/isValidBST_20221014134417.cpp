#include<iostream>
#include<vector>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

bool isValidBST(TreeNode* root) {
      if(! root) return 1;
      if(root->left){
            if(root->left->val >= root->val) return false;
            //isValidBST(root->left);
      }
      
      if(root->right){
            if(root->right->val <= root->val) return false;
           // isValidBST(root->right);
      }
      return isValidBST(root->left) && isValidBST(root->right);
}