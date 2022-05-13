#include <iostream>
#include <map>
#include <vector>
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



void bfs(TreeNode *node, int cumulative, vector<int> &sum_){
    if(! node){
        sum_.push_back(cumulative);
        return ;
    }
    bfs(node->left, cumulative + node->val, sum_);
    bfs(node->right, cumulative + node->val, sum_);
}



bool hasPathSum(TreeNode *root, int targetSum){
    vector<int> sum_;
    bfs(root, 0, sum_);
    for(int i = 0; i < sum_.size(); i++){
        if(sum_[i] == targetSum) return 1;
    }
    return 0;
}