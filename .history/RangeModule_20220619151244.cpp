#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

class RangeModule {
    private:
    //map<int, int> right_map;
    map<int, int> left_map;
public:
    RangeModule(){
        ;
    }
    
    
    void addRange(int left, int right) {
        
        int new_left = left, new_right = right;
        auto it = left_map.lower_bound(left);
        while(it != left_map.end() && it->second < right){
            new_left = min(new_left, it->second);
            new_right = max(new_right, it->first);
            left_map.erase(it);
            it ++;
        }
        left_map[new_right] = new_left;
    }
    
    bool queryRange(int left, int right) {
        auto found = left_map.lower_bound(left);
        if(found == left_map.end()) return 0;
        if(found->second <= left && found->first >= right) return 1;
        return 0;
    }
    
    void removeRange(int left, int right) {
        auto it = left_map.lower_bound(left + 1);
        while(it != left_map.end() && it->second <= right){
            if(it->second < left) left_map[left] = it->second;
            if(it->first > right){
                left_map[it->first] = right;
                break;
            }else{
                left_map.erase(it);
                it ++;
            }
        }
    }
};
