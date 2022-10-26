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
      for(int i = 0 ; nums.size(); i++ )
            pq.emplace(nums[i]);
    }
    
      int add(int val) {
            priority_queue<int, vector<int> , greater<int> > tmp = pq;
            for(int i = 0 ; i < sz; i++){
                  tmp.pop();
            }
            return tmp.top();
      }
    
};
