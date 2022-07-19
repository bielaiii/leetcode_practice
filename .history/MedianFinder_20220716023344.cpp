#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MedianFinder {
      private:
      priority_queue<int, vector<int> ,greater<int> >  bigq; //ascendingo order
      priority_queue<int> smallq; //descending order
public:
    MedianFinder() {
      ;
    }
    
    void addNum(int num) {
      if(bigq.size() == 0){
            bigq.push(num);
      }else if(smallq.size() == 0){
            smallq.push(num);
      }else if(smallq.size() - bigq.size() < 2){
            if(num > )
      }else{

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