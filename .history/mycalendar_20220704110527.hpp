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
            auto lower = mymap.lower_bound(start);
            auto upper = mymap.upper_bound(end);
            while(lower != upper){
                
            }
        }
};