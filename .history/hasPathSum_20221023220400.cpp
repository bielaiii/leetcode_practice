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



void bfs_hasPathSum(TreeNode *root, int cumulative, int const target,bool & found){
    if(! node){
        if(cumulative == target) found;
        return ;
    }
    bfs(node->left , cumulative + node->val, target, found);
    bfs(node->right, cumulative + node->val, target, found);
    
}



bool hasPathSum(TreeNode *root, int targetSum){
    vector<int> sum_;
    if(! root) return 0;
    bfs(root, 0, sum_);
    for(int i = 0; i < sum_.size(); i++){
        if(sum_[i] == targetSum) return 1;
    }
    return 0;
}