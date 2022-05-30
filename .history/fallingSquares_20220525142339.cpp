#include<iostream>
#include<vector>
#include<map>
using namespace std;


/* class Tree{
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
 */
vector<int> fallingSquares(vector<vector<int>>& positions) {
    vector<int> ans (positions.size(), 0);

    for(int i =0 ; i < positions.size(); i++){
        int left = positions[i][0];
        int right = positions[i][1] + positions[i][0] - 1;
        int ans = positions[i][1];
        for(int j = 0; j < i; j++){
            if(right >= positions[j][0] && left <= (positions[j][0] + positions[j][1] - 1)){
                ans[i] = max( ans[i], ans[j] + positions[i][1]);
            }
        }
    }
    for(int i = 1; i < positions.size(); i++){
        ans[i] = max(ans[i], ans[i - 1]);
    }
    return ans;
}