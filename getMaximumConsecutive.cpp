#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getMaximumConsecutive(vector<int>& coins) 
{
      sort(coins.begin(), coins.end());
      int ret = 0;
      for (auto coin : coins) {
            if (coin > ret) {
                  break;
            }
            ret+=coin;
      }
      return ret;
}