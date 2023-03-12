#include<iostream>
#include<vector>
#include<map>
using namespace std;
class MyCalendar{
    public:
        MyCalendar(){
            ;
        }

        map<int ,int> mymap;

        bool book(int start, int end){
            //auto lower = mymap.lower_bound(start);
            if(mymap.empty()){
                mymap[start] = end;
                return 1;
            }
            auto upper = mymap.upper_bound(start);
            if(upper == mymap.end()){
                upper--;
                if(start < upper->second) return 0;
            }else if(upper == mymap.begin()){
                if(end > upper->first) return 0;

            }else{
                if(end > upper->first) return 0;
                upper --;
                if(start < upper->second) return 0;
                //if(end >= upper->second) return 0;
            }
            mymap[start] = end;
            return 1;
        }
};

/* class MyCalendar {
public:
    MyCalendar() {

    }
    
    bool book(int start, int end) {
        if (m.empty()) {
            m[start] = end;
            return true;
        }
        // 10      20     30     40
        //     15         30
        auto it = m.upper_bound(start);
        if (it == m.end()) {
            --it;
            if (start < it->second) return false;
        } else if (it == m.begin()) {
            if (end > it->first) return false;
        } else {
            if (end > it->first) return false;
            --it;
            if (start < it->second) return false;
        }
        m[start] = end;
        return true;
    }
    std::map<int, int> m;
}; */