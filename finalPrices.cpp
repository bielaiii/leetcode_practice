#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> finalPrices(vector<int>& prices) {
      stack<int> st;
      vector<int> vt (prices.size() ,0 );
      for(int i = 0; i < prices.size(); i++){
            //st.push(prices[i]);
            int tempi = i + 1;
            if(i + 1 < prices.size()){
                  st.push(prices[tempi]);
            }
            while(st.size() && st.top() > prices[i] && tempi < prices.size()){
                 st.push(prices[tempi]);
                  tempi ++;
            }
            if(st.size() && st.top() <= prices[i] || tempi != prices.size()){
                  vt[i] = prices[i] - st.top();
            }else if(tempi == prices.size()){
                  vt[i] = prices[i];
            }else{
                  vt[i] = prices[i] - st.top();
            }
            while(st.size()) st.pop();
      }
      return vt;
}