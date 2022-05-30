#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;


class Node{
    private:
        char c;
        int count = 0 ;
        vector<Node *> vec;
    public:
        Node(char cc, int co):c(cc),count(co){};
        void AddEdge(Node* );
        vector<Node*> GetAllEdge();
        friend void AddCount(Node *);
};

void AddCount(Node *current){
    current->count ++;
}

void Node::AddEdge(Node* current_node){
    this->vec.push_back(current_node);
    count ++;
}

vector<Node*> Node::GetAllEdge(){
    return this->vec;
}

string alienOrder(vector<string>& words) {
    string ans = "";
    unordered_map<char, vector<char> > map_;
    unordered_map<char, int> degree;
    bool visited = 1;
    for(auto word : words){
        for(auto cha : word){
            if(!map_.count(cha)){
                map_[cha] = {};
            }
            if(!degree.count(cha)){
                degree[cha] = 0;
            }
        }
    }
    for(int i = 1; i < words.size(); i++){
        int j = 0;
        int len = min(words[i-1].size(), words[i].size());
        for(; j < len; j++){
            
        }
    }
}