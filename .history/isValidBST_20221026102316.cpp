#include<iostream>
#include<vector>
using namespace std;

/**
 * Definition for a binary tree node.
 * */
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

int ptr = INT32_MIN;
bool rec_isValidBST(TreeNode * root){
      if(root){
            if(rec_isValidBST(root->left)){
                  if(ptr < root->val){
                        ptr = root->val;
                        return rec_isValidBST(root->right);
                  }
                  return 0;
            }
      }
      return 1;
}

bool isValidBST(TreeNode* root){
      return rec_isValidBST(root);
}