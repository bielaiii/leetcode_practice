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
                return 1;
            }
            if(temp->left <= start && end < temp->right ){
                return true;
            }
            if(temp->l >= end){
                search(start, end , temp->left);
            }
            else if(temp->r <= start){
                search(start, end, temp->right);
            }
            
        }

        void insert(int start, int end){
            
        }

        bool book(int start, int end){

        }
}