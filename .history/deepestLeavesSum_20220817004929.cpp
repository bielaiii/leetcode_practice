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

void recur_deepestLeaveSum(TreeNode * root, int cur, int & maxlevel, int & sum){
    if(root == nullptr) return ;
    if(cur == max){
        sum += root->val;
    }else if(cur > max){
        sum = root->val;
    }
    recur_deepestLeaveSum(root->left, cur + 1, maxlevel, sum);
    recur_deepestLeaveSum(root->right, cur + 1, maxlevel, sum);
}

int deepestLeavesSum(TreeNode* root) {
    int cur = 0;
    int max = 0;
    int sum = 0;
    recur_deepestLeaveSum(root, cur, max, sum);
    return sum;
}
