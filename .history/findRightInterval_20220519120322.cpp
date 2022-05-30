#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
using namespace std;

vector<int> findRightInterval(vector<vector<int>>& intervals) {
    unordered_map<int, int> map_;
    vector<int> vec_;
    for(int i = 0; i < intervals.size(); i++){
        map_.insert({intervals[i][0], i});
    }
    for(int i = 0; i < intervals.size(); i++){
        if(map_.count(intervals[i][1])){
            vec_.push_back(map_[intervals[i][1]]);
        }else{
            int temp = 0;
            
        }
    }
}