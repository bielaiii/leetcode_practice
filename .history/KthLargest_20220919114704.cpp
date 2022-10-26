#include<iostream>
#include<vector>
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
            for(int i = st.size(); i < sz && temp.size(); i ++){
                  st.push(temp.top());
                  temp.pop();
            }
            while(temp.size()) temp.pop();

    }
};
