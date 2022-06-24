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
        while(it_right < right) it_right ++;
        if(it == map_.end()){
            map_.insert({left, right});
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
