#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fillCups(vector<int>& amount) {
      int ct = 0;
      while (amount[0] > 0 || amount[1] > 0 || amount[2] > 0) {
            sort(amount.begin(), amount.end());
            if (amount[1] > 0){
                  amount[1]--;
                  amount[2]--;
            } else if(amount[2] > 0) {
                  amount[2]--;
            }
            ct++;
            
      }
      return ct;
}