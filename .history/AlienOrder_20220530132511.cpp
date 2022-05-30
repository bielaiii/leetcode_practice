#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
        char c;
        int count = 0 ;
        vector<Node *> vec;
    private:
        Node(char cc, int co):c(cc),count(co){};
        void AddEdge(Node* );
        vector<Node> GetAllEdge();
        friend void AddCount();
};

void Node::AddCount(){
    
}

void Node::AddEdge(Node* current_node){
    current_node/
    this->vec.push_back(current_node);
    count ++;
}

vector<Node> Node::GetAllEdge(){
    return vec;
}

string alienOrder(vector<string>& words) {
    string ans = "";
    for(auto word : words){
        for(auto cha : word){
            if(ans.find_first_not_of(cha)){

            }
        }
    }
}