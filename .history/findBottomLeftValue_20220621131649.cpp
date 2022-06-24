#include<iostream>
#include<vector>
using namespace std;



int recursive_findBottomLeftValue(TreeNode * root, int& max_d, int& cur_d, int val){
    if (!root->left && !root->right)
    {
        if(cur_d > max_d){
            max_d = cur_d;
            return root->val;
        }
    }
    //recursive_findBottomLeftValue(root->left);
    if(root->right )recursive_findBottomLeftValue(root->right, max_d, cur_d + 1, val);
    if(root->left )recursive_findBottomLeftValue(root->left, max_d, cur_d + 1, val);
    
}

int findBottomLeftValue(TreeNode* root) {
    int max_depth = 0, cur_depth = 0, val = 0;
    return recursive_findBottomLeftValue(root, max_depth, cur_depth, val);
}