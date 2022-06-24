#include<iostream>
#include<vector>
#include<map>
using namespace std;

class RangeModule {
    private:
    map<int, int> map_;
public:
    RangeModule(){
        map_.insert({0,0});
    }
    
    
    void addRange(int left, int right) {
        auto it_left = map_.rbegin();
        while(it_left->first > left) it_left ++;
        auto it_right = map_.begin();
        while(it_right->second <= right) it_right ++;
        if(it_right->first == it_left->first ) return;
        if(left == it_left->first){
            it_left->second = right > it_left->second? right : it_left->second;
        }else{
            it_left->first = left;
        }
        map_.insert({left, right});
    }
    
    bool queryRange(int left, int right) {
        
    }
    
    void removeRange(int left, int right) {
        for(auto c : map_){
            if(c.first >= left && c.second < right){

            }
        }
    }
};
