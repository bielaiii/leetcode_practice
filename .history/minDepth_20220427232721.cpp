#include <iostream>
#include <vector>
using namespace std;


void traversal(TreeNode *root, vector<int> &depth, int cur_depth){
    if(root == nullptr){
        depth.push_back(cur_depth);
        return;
    }
    traversal(root->left, depth, cur_depth + 1);
    traversal(root->right, depth, cur_depth + 1);
}




int minDepth(TreeNode *root){
    vector<int> depth;
    traversal(root, depth,0 );
    int max_depth = 0; 
    for(int i = 0; i < depth.size(); i++){
        max_depth = max(max_depth, depth[i]);
    }
    return max_depth;
}