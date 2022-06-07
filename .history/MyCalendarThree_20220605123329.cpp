#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

class MyCalendarThree {
    private:
    int count = 0;
    set<int> set_;
    map<int, int> map_{};
   // vector<int> vec(1000000000, 0);
   // vector<int> vect;
public:
    MyCalendarThree() {
        count = 0;
    }
    
    friend void print_map(MyCalendarThree & cal){
        for(auto it : cal.map_){
            cout << it.first << " " << it.second <<endl;
        }
    }

    int book(int start, int end){
        map
       for(auto &it : map_){
           it->firr
       }
        while(it != map_.end() && it->first != end){
            ret = max(ret, it->second);
            it ++;
        }
        return ret;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */


