#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;;

bool canFinish(int numCourses, vector<vector<int>> & prerequisites){
    queue<int> queue_;
    map<int,int> map_;
    vector<int> degree (numCourses, 0);
    vector<vector<int>> learn (numCourses);
    for(auto &n : prerequisites){
        degree[n[0]] ++;
        learn[n[1]].push_back(n[0]);
    }
    for(int i = 0; i < numCourses; i++){
        if(! degree[i]) queue_.push(i);
    }
    while(!queue_.empty()){
        int cur = queue_.front();
        queue_.pop();
        for(int i = 0; i < prerequisites.size(); i++){
            if(prerequisites[i][1] == cur){
                map_[prerequisites[i][0]] --;
            }
        }
        for(auto  it = map_.begin(); it != map_.end(); it ++){
            if(it->second == 0)
                queue_.push(it->first);
        }
    }
    for(auto  it = map_.begin(); it != map_.end(); it ++){
            if(it->second)
                return false;
        }
    return true;
}