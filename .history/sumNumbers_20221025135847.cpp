#include<iostream>
#include<vector>
#include<algorithm>
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

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

void rec_sumNumbers(TreeNode * root, vector<int>& sum, int temp_sum){
      if(! root) return;
      temp_sum += temp_sum * 10 + root->val;

      if(root && ! root->left && ! root->right){
            sum.push_back(temp_sum);
            return ;
      }
      rec_sumNumbers(root->left, sum, temp_sum);
      rec_sumNumbers(root->right, sum, temp_sum);
      //rec_sumNumbers(root->left, sum, temp_sum);
}

int sumNumbers(TreeNode* root) {
      vector<int> sum ;
      int temp_sum;
      rec_sumNumbers(root, sum, temp_sum);
      return accumulate(sum.begin(), sum.end());
}