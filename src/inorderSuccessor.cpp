/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



/* 
TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
    if(! root)return nullptr;
    TreeNode *node = nullptr;
    //inorderSuccessor(root->left, p);
    //inorderSuccessor(root->right, p);
    if(p->val >= root->val){
        return inorderSuccessor(root->right, p);
    }
    node = inorderSuccessor(root->left, p);
    
    return node == nullptr? root : nullptr;
}
 */