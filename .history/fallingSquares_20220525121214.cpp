#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Tree{
    public:
        int start = 0;
        int end = 0;
        int height = 0;
    private:
        Tree:start(x)()
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