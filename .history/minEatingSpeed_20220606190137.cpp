#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    //int start = accumulate(piles.begin(), piles.end(), 0) / h;
    int start = 1;
    //int start = sum / h;
    int max_value = 0;
    for(auto it : piles) max_value = max(max_value, it);
    //cout << sum <<endl;
   // int start = 1;
   int ret = 0;
    while (start < max_value)
    {
        int hh = 0;
        int temp = start + (max_value - start) / 2;
        for(auto pile : piles){
          // hh += pile / start == 0? pile / start : pile / start + 1;
          hh += (pile + start - 1) / start;
        }
        if(hh <= h){
            ret = temp;
            max_value = temp;
        }else{
            start = temp + 1;
        }
    }
    return ret;
}