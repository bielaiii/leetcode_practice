#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Tree{
    public:
        int start = 0;
        int end = 0;
        int height = 0;
        Tree *left;
        Tree *right;
    private:
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
    hi = max(hi, count_height(node->left))
}

vector<int> fallingSquares(vector<vector<int>>& positions) {
    vector<int> ans (positions.size(), 0);
    map<int,int> map_;
    for(int i = 0; i < positions.size(); i++){
       auto it = map_.begin();
       while(it != map_.end() && it->first < positions[i][0]){
           it ++;
       }
       if(it != map_.end()){
           map_.insert({positions[i], it->second + it->first});
       }
       if(map_.count(positions[i][0])){
           map_.insert({positions[i][0], positions[i][1]});
       }
        
    }
}