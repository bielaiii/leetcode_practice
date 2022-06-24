#include<iostream>
#include<vector>
#include<map>
using namespace std;

class RangeModule {
    private:
    map<int, int> map_left;
    map<int, int> map_right;
public:
    RangeModule(){
        ;
    }
    
    
    void addRange(int left, int right) {
        if(map_left.count(left)){
            map_left[left] = right > map_left[left] ? right : map_left[left];
        }else{
            map_left.insert({left, right});
            auto it = map_left.begin();
            while(it != map_left.end() && it->first != left ){
                it ++;
            }
            while(it->second < right){
                map_.erase(it);
                it++;
            }
        }
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
