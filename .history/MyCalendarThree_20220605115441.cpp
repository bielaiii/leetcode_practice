#include<iostream>
#include<vector>
#include<set>
using namespace std;

class MyCalendarThree {
    private:
    int count;
    set<int> set_;
public:
    MyCalendarThree() {
            count = 0;
            set_.clear();
    }
    
    int book(int start, int end){
        if(! set_.size()){
            set_.insert(start);
            set_.insert(end);
            count++;
        }else{
            if(*set_.begin() >= end){
                //return count ;
            }else if(* set_.rbegin() <= start){
                //return count;
            }else{
                this->count ++;
            }
            set_.insert(start);
            set_.insert(end);
        }   
        return count;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */


