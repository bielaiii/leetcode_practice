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
    if(! root)return nullptr;
    
    //inorderSuccessor(root->left, p);
    //inorderSuccessor(root->right, p);
    if(root->val > p->val){
        inorderSuccessor(root->right, p);
    }else{
        TreeNode * node = inorderSuccessor(root->left, p);
    }
    return node == nullptr? root : nullptr;
}
