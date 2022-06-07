#include<iostream>
#include<vector>
#include<numeric>
#include<cmath>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int start = 1;
    int max_value = 0;
    for(auto it : piles) max_value = max(max_value, it);
   int ret = 0;
    while (start < max_value)
    {
        int hh = 0;
        int temp = start + (max_value - start) / 2;
        for(auto pile : piles)
           hh += ceil((double)pile / temp * 1.0);
        if(hh <= h){
            ret = temp;
            max_value = temp;
        }else{
            start = temp + 1;
        }
    }
    return ret;
}