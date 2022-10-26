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
      stack<int> temp;
      st.push(nums[0]);
      for(int i =1; i < nums.size(); i++){
            while(st.size() && nums[i] > st.top()){
                  temp.push(st.top());
                  st.pop();
            }
            st.push(nums[i]);
            for(int i = st.size(); i < k && temp.size(); i ++){
                  st.push(temp.top());
                  temp.pop();
            }
      }
    }
    
    int add(int val) {
      return this->st.top();
    }
};
