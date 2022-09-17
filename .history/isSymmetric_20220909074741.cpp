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

bool isSymmetric_rec(TreeNode *oneroot, TreeNode *tworoot){
      if(! oneroot && !tworoot){
            return true;
      }
      if(!oneroot || ! tworoot || oneroot->val != tworoot->val){
            return false;
      }
      return isSymmetric_rec(oneroot->left, tworoot->right) && isSymmetric_rec(oneroot->right, tworoot->left);
}

bool isSymmetric(TreeNode* root) {
      return isSymmetric_rec(root->left, root->right);
}
