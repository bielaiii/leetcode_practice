#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

class KthLargest {
      private:
      int sz;
      stack<int> st;
      priority_queue<int, vector<int>, greater<int> > pq;
public:
    KthLargest(int k, vector<int>& nums) {
      sz = k ;
      for(int num : nums){
            add(num);
      }
    }
    
      int add(int val) {
           pq.push(val);
           while(pq.size() > sz){
            pq.pop();
           }
           return pq.top();
      }
    
};
