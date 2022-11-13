#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int compress(vector<char>& chars) {
      int l = 0, r = 0;
      vector<char > vec;
      char last = chars[0];
      chars.push_back('!');
      int count= 0;
      for( int i = 0; i < chars.size(); i++){
            if(chars[i] == last ){
                  count ++;
                  continue;
            }else{
                  vec.push_back(last);
                  stack<int> st;
                  if(count != 1)
                        while(count){
                              st.push(count % 10);
                              //vec.push_back('0' + count % 10);
                              count /= 10;
                        }
                  while(st.size()){
                        vec.push_back(st.top());
                        st.pop();
                  }
                  count = 1;
                  last = chars[i];
            }
      }
      chars = vec;
      return chars.size();
}