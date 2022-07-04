#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

class segTree{
    private:
        int l, r
        segTree *left, right;
    public:
        segTree(int a, int b): l(a), r(b), left(nullptr), right(nullptr)
        {};
};
class MyCalendar{
    segTree * mytree = new segTree(0, 1e9);
    public:
        MyCalendar(){
            ;
        }

        bool search(int start, int end, segTree* temp){
            if(temp == nullptr){
                return 0;
            }
            if(temp->left <= start && end < temp->right ){
                return true;
            }
            else if(temp->l >= end){
                search(start, end , temp->left);
            }else
                search(start, end, temp->right);
            }
        }

        void insert(int start, int end, segTree * temp){
            if(start >= temp->r && temp->right == nullptr){
                segTree * node = new segTree(start, end);
                temp->right = node;
            }else if(end < segTree->l && temp->left == nullptr){
                segTree * node = new segTree(start, end);
                temp->left = node;
            }
            if(start >= temp->r){
                insert(start, end, temp->right);
            }else{
                insert(start, end, temp->left);
            }
        }

        bool book(int start, int end){
            if(search(start, end, this->mytree)){
                insert(start, end ,this->mytree);
                return 1;
            }else{
                return 0;
            }
        }
}