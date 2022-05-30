#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Tree{
    private:
        int start = 0;
        int end = 0;
        int height = 0;
        Tree *left = nullptr;
        Tree *right = nullptr;
    public:
        Tree(int s, int e , int h):start(s), end(e), height(h){};
        Tree* insert(Tree *, int , int  ,int );
        int count_height(Tree*,int ,int );
};

Tree* Tree::insert(Tree *node, int s ,int e ,int h){
    if(! node) return new Tree(s , e, h);
    if(s < node->start){
        node->left = insert(node, s, e , h);
    }else{
        node->right = insert(node, s ,e ,h);
    }
    return node;
}

int Tree::count_height(Tree *node, int start, int end){ 
    if(! node) return 0;
    int hi = 0;
    if(node->start >= start && node->end <= end) return node->height;
    hi = max(hi, count_height(node->left, start, end));
    hi = max(hi, count_height(node->right, start, end));
    return hi;
}

vector<int> fallingSquares(vector<vector<int>>& positions) {
    vector<int> ans (positions.size(), 0);
    map<int,int> map_;
    int max_height = 0;
    Tree * root = new Tree(positions[0][0], positions[0][1] + positions[0][0], positions[0][1] );
   for(auto pos : positions){
       int current_height = root->count_height(root, pos[0], pos[1] + pos[0]);
       Tree *temp = root->insert(root, pos[0], pos[1] + pos[0], pos[1]);
        max_height = max(max_height, current_height + positions[0][1]);
        ans.push_back(max_height);
   }
   return ans;
}