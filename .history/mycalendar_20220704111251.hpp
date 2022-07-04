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
            auto upper = mymap.upper_bound(start);
            if(upper != mymap.end()){
                if(upper->first >= start && upper->second > end){
                    return 0;
                }else{
                    upper ++;
                    if( upper != mymap.end()){
                        if(end >= upper->first) return 0;
                    }
                    return 1;
                }
            }else{
                mymap[start] = end;
                return 1;
            }
        }
};