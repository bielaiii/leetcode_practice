#include<iostream>
#include<vector>
using namespace std;

int recursive_findBottomLeftValue(TreeNode * root, int depth){
    if (!root->left && !root->right)
    {
        if()
        return root->val;
    }
    //recursive_findBottomLeftValue(root->left);
    recursive_findBottomLeftValue(root->right, depth + 1);
    return recursive_findBottomLeftValue(root->left, depth + 1);
    
}

int findBottomLeftValue(TreeNode* root) {
    return recursive_findBottomLeftValue(root, 0);
}