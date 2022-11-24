#include<iostream>
#include<vector>
using namespace std;

int countBalls(int lowLimit, int highLimit) {
      vector<int> vt (46, 0);
      int i = lowLimit;
      int ans = INT16_MIN;
      while( i <= highLimit){
            int temp = i;
            int sum = 0;
            while(temp){
                  sum += temp % 10;
                  temp /= 10;
            }
            vt[sum] ++;
            ans = max(ans, vt[sum]);
            i ++;
      }
      return ans;
}
