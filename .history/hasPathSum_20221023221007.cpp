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
    
    if(root && ! root->left && ! root->right){
        if(cumulative == target) found = 1;
        return ;
    }
    if(! root) return ;
    bfs_hasPathSum(root->left , cumulative + root->val, target, found);
    bfs_hasPathSum(root->right, cumulative + root->val, target, found);

}



bool hasPathSum(TreeNode *root, int targetSum){
    if(! root) return 0;
    bool found = 0;
    int sum = 0;
    bfs_hasPathSum(root, sum, targetSum, found);
    return found;
}