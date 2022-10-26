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
      while(temp.size()){
            st.push(temp.top());
            temp.pop();
      }
      
      return get_kth(val);
    }

      int get_kth(int val){
            stack<int> tmp = st;
            for(int i = tmp.size(); i >= val; i--){
                  cout << tmp.top() << " ";
                  tmp.pop();
            }
            cout << endl;
            return tmp.top();
      }

    friend void print_kth(KthLargest & kth){
      stack<int> stc = kth.st;
      while(stc.size()){
            cout << stc.top() <<" -> ";
            stc.pop();
      }
      cout << endl;
    }
};
