#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

class RangeModule {
    private:
    map<int, int> right_map;
    map<int, int> left_map;
public:
    RangeModule(){
        ;
    }
    
    
    void addRange(int left, int right) {
        if(left_map.count(left)){
            left_map[left] = right > left_map[left] ? right : left_map[left];
        }else{
            left_map[left] = right;
        }
        /* 
        if(right_map.count(right)){
            right_map[right] = left <= right_map[right] ? left  : right_map[right];
        }else{
            right_map[right] = right;
        }*/
        for(auto it : left_map){
            if((it + 1) != left_map.end()){
                it.
            }
        }
        
    }
    
    bool queryRange(int left, int right) {
        
    }
    
    void removeRange(int left, int right) {
        
    }
};
