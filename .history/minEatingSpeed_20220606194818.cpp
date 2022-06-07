#include<iostream>
#include<vector>
#include<numeric>
#include<cmath>
using namespace std;

/* int minEatingSpeed(vector<int>& piles, int h) {
    int start = 1;
    int max_value = 0;
    for(auto it : piles) max_value = max(max_value, it);
   int ret = max_value;
    while (start < max_value)
    {
        int hh = 0;
        int temp = start + (max_value - start) / 2;
        for(auto pile : piles)
            hh += (pile + temp - 1) / temp; 
           //hh += ceil((double)pile / temp * 1.0);
        if(hh <= h){
            ret = temp;
            max_value = temp;
        }else{
            start = temp + 1;
        }
    }
    return ret;
} */

int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        for (int pile : piles) {
            high = max(high, pile);
        }
        int k = high;
        while (low < high) {
            int speed = (high - low) / 2 + low;
            long time = getTime(piles, speed);
            if (time <= h) {
                k = speed;
                high = speed;
            } else {
                low = speed + 1;
            }
        }
        return k;
    }

    long getTime(const vector<int>& piles, int speed) {
        long time = 0;
        for (int pile : piles) {
            int curTime = (pile + speed - 1) / speed;
            time += curTime;
        }
        return time;
    }
