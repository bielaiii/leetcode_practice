#include<iostream>
#include<vector>
#include<unordered_map>
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

unordered_map<int ,int> map_;
int traversal_findFrequentTreeSum(TreeNode * root){
    
    if(! root){
        return 0;
    }
    int val = traversal_findFrequentTreeSum(root->left) + traversal_findFrequentTreeSum(root->right) + root->val;
    if(map_.count(val)){
        map_[val] ++;
    }else{
        map_[val] = 0;
    }
    return val;
}

vector<int> findFrequentTreeSum(TreeNode* root ) {
    
    traversal_findFrequentTreeSum(root);
    int max_val = 0;
    for(auto it : map_){
        max_val = max_val < it.second ? it.second : max_val;
    }
    vector<int> ans;
    for(auto it : map_){
        if(it.second == max_val){
            ans.push_back(it.first);
        }
    }
    return ans;
}
