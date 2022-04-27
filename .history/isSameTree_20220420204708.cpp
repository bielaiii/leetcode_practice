#include<vector>
#include<iostream>
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

void traversal(TreeNode *tree, vector<int> &vec){
    if(! tree){
        vec.push_back(9999);
    }else{
        vec.push_back(tree->val);
        traversal(tree->left, vec);
        traversal(tree->right, vec);
    }
}


bool isSameTree(TreeNode *p, TreeNode *q){
    vector<int> qt;
    vector<int> pt;
    traversal(p, pt);
    traversal(q, qt);
    if(qt.size() != pt.size()){
        return 0;
    }else{
        for(int i = 0; i < qt.size(); i++){
            if(qt[i] != pt[i]){
                return 0;
            }
        }
        return 1;
    }
    return 1;
}