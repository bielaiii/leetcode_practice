class segTree{
    public:
        int l, r;
        segTree *left;
        segTree *right;
    
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
            if(temp->l <= start && end < temp->r ){
                return true;
            }else if(temp->l >= end){
                return search(start, end , temp->left);
            }else{
                return search(start, end, temp->right);
            }
           
        }

        void insert(int start, int end, segTree * temp){
            if(start >= temp->r && temp->right == nullptr){
                segTree * node = new segTree(start, end);
                temp->right = node;
            }else if(end < temp->l && temp->left == nullptr){
                segTree * node = new segTree(start, end);
                temp->left = node;
            }
            if(start >= temp->r){
                if(temp->right)
                    insert(start, end, temp->right);
                
            }else{
                if(temp->left)
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
};