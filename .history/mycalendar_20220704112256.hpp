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
                mymap[stat] = end;
                return 1;
            }
            auto upper = mymap.upper_bound(start);
            if(upper == mymap.end()){
                upper--;
                if(start >= upper->second) return 1;
            }else{
                auto next = upper + 1;
                if(end >= upper->second) return 0;
            }
            mymap[start] = end;
            return 1;
        }
};