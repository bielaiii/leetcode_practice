#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MedianFinder {
      private:
      priority_queue<int, vector<int> ,greater<int> >  bigq; //ascendingo order //houmian 5 6 7 8 9
      priority_queue<int> smallq; //descending order //qianmian 4 3 2 1 0
public:
    MedianFinder() {
      ;
    }
    
    void addNum(int num) {
      if(bigq.size() == 0 || bigq.top() <= num){
            bigq.push(num);
            if(bigq.size() > smallq.size() + 1){
                  smallq.push(bigq.top());
                  bigq.pop();
            }
      }else{
            smallq.push(num);
            if(smallq.size() > bigq.size() + 1){
                  bigq.push(smallq.top());
                  smallq.pop();
            }
      }
    }
    double findMedian() {
      if(smallq.size() == bigq.size()) return ( smallq.top() + bigq.top()) / 2.0;
       return  bigq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */