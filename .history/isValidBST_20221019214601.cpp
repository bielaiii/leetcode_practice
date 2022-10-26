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


bool rec_isValidBST(TreeNode *root, long minnum, long maxnum){
      if( root == nullptr) return 1;
      if(root->val <= minnum || root->val >= maxnum) return 0;
      return rec_isValidBST(root->left, minnum, root->val) && rec_isValidBST(root->right, root->val , maxnum);
}

bool isValidBST(TreeNode* root) {
     return rec_isValidBST(root, LONG_MIN, LONG_MAX);
}