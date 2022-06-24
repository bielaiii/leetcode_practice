#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

class RangeModule {
    private:
    set<int> left_set;
    set<int> right_set;
public:
    RangeModule(){
        ;
    }
    
    
    void addRange(int left, int right) {
        left_set.insert(left);
        right_set.insert(right);
        
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
