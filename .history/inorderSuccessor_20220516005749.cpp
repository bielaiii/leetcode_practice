/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
    if(root->val == p){
        return root->right;
    }
    inorderSuccessor(root->left, p);
    inorderSuccessor(root->right, p);
    return root;
}
