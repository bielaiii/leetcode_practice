#include<iostream>
#include<vector>
#include<priority_queue>
#include<stack>
using namespace std;

class KthLargest {
      private:
      int sz;
      stack<int> st;
      
public:
    KthLargest(int k, vector<int>& nums) {
      sz = k;
      st.push(nums[0]);
      for(int i =1; i < nums.size(); i++){
            this->add(nums[i]);
      }
    }
    
      int add(int val) {
            stack<int> temp;
            while(st.size() && val < st.top()){
                  temp.push(st.top());
                  st.pop();
            }
            st.push(val);
            while(! temp.empty()){
                  st.push(temp.top());
                  temp.pop();
            }
            return get_th(val);
      }
    
};
