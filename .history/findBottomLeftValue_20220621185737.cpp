#include<iostream>
#include<vector>
using namespace std;

int max_depth = 0, cur_depth = 0, val = 0;

void recursive_findBottomLeftValue(TreeNode * root,  int cur_d){
    if (!root->left && !root->right)
    {
        if(cur_d > max_d){
            max_d = cur_d;
            val = root->val;
            return ;
        }
    }
    //recursive_findBottomLeftValue(root->left);
    if(root->left )recursive_findBottomLeftValue(root->left, cur_d + 1);
    if(root->right )recursive_findBottomLeftValue(root->right,  cur_d + 1);
    
    
}

int findBottomLeftValue(TreeNode* root) {
    
    recursive_findBottomLeftValue(root, max_depth, cur_depth, val);
    return val;
}