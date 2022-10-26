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

int * last = nullptr;

bool rec_isValidBST(TreeNode *root, int minnum, int maxnum){
      if(! root) return 0;
      if(root->val < minnum || root->val > maxnum) return 0;
      return rec_isValidBST(root->left, minnum, root->val) && rec_isValidBST(root->right, root->val , maxnum);
}

bool isValidBST(TreeNode* root) {
     return rec_isValidBST(root, INT16_MIN, INT16_MAX);
}