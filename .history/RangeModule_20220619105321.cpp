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
        auto it = map_.begin();
        while(it != map_.end()){
            if(left >= it->first && left < it->second){
                it->second = right > it->second ? right : it->second;
                break;
            }
        }
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
