#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

class MyCalendarThree {
    private:
    int count;
    set<int> set_;
    map<int, int> map_;
   // vector<int> vec(1000000000, 0);
   // vector<int> vect;
public:
    MyCalendarThree() {
            count = 0;
            set_.clear();
           // vect (1000, 0);
            //vec.clear();
    }
    
    friend void print_map(MyCalendarThree & cal){
        for(auto it : cal.map_){
            cout << it.first << " " << it.second <<endl;
        }
    }

    int book(int start, int end){
        for(auto & it: map_){
            if(it.first >= start && it.first < end){
                it.second ++;
            }
        }




       /*  if(map_.count(start)){
            map_.insert({start, 1});
        }else{
            map_[start] ++;
        }
        if(map_.count(end)){
            map_.insert({end, 1});
        } */


        auto it = map_.find(start);
        int ret = 0;
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


