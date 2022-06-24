#include<iostream>
#include<vector>
using namespace std;

int recursive_findBottomLeftValue(TreeNode * root){
    if (!root->next)
    {
        return root->val;
    }
    //recursive_findBottomLeftValue(root->left);
    recursive_findBottomLeftValue(root->right);
    return recursive_findBottomLeftValue(root->left);
    
}

int findBottomLeftValue(TreeNode* root) {
    return recursive_findBottomLeftValue(root);
}