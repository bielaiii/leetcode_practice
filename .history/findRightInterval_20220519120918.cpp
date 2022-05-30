#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int> findRightInterval(vector<vector<int>>& intervals) {
    unordered_map<int, int> map_;
    vector<int> vec_;
    int max_ = 0;
    for(int i = 0; i < intervals.size(); i++){
        map_.insert({intervals[i][0], i});
        max_ = max(max_, intervals[i][0]);
    }
    for(int i = 0; i < intervals.size(); i++){
        if(map_.count(intervals[i][1])){
            vec_.push_back(map_[intervals[i][1]]);
        }else{
            int temp = intervals[i][1];
            while(temp < max_){
                if( (auto & it = map_.find(temp)) ){
                    
                }else{

                }
            }
        }
    }
}