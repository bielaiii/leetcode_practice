#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;;

bool canFinish(int numCourses, vector<vector<int>> & prerequisites){
    queue<int> queue_;
    map<int,int> map_;
    for(int i = 0;i < prerequisites.size();i ++){
        if(map_.count(prerequisites[i][0])){
            map_[prerequisites[i][0]] ++;
        }else{
            map_[prerequisites[i][0]] = 1;
        }
    }
    for(int i = 0; i < numCourses; i++){
        if(! map_.count(i)) queue_.push(i);
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