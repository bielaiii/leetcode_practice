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
        auto it = left_map.lower_bound(left);
        int new_left = left, new_right = right;
        while(it != left_map.end() && it->second < right){
            new_left = min(new_left, it->first);
            new_right = max(new_right, it->second);
            left_map.erase(it);
            it ++;
        }
        left_map[new_left] = new_right;
    }
    
    bool queryRange(int left, int right) {
        auto found = left_map.lower_bound(left);
        if(found == left_map.end()) return 0;
        if(found->second <= left && found->first >= left) return 1;
        return 0;
    }
    
    void removeRange(int left, int right) {
        while()
    }
};
