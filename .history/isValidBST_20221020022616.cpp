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
int * ptr = nullptr;
bool rec_isValidBST(TreeNode * root){
      if( !root) return 1;
      if(ptr == nullptr) return 1;
      if(root->val >= * ptr) return 0;
      if( rec_isValidBST(root->left)){
            if(ptr <= root->val) return 0;
            return rec_isValidBST(root->right);
      }
      return 0;
}

bool isValidBST(TreeNode* root){
      return rec_isValidBST(root);
}