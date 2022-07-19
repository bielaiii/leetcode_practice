#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MedianFinder {
      private:
      priority_queue<int, vector<int> ,greater<int> >  bigq;
      priority_queue<int> smallq;
public:
    MedianFinder() {
      ;
    }
    
    void addNum(int num) {
      if(num > smallq.top()){
            
      }
    }
    
    double findMedian() {
      return 
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */