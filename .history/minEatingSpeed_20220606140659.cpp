#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
    int start = accumulate(piles.begin(), piles.end(), 0) / h;
    //int start = sum / h;
    //cout << sum <<endl;
    while (1)
    {
        int copy_h = h;
        for(int i = 0; i < piles.size(); i++){
            copy_h -= (piles[i] / start);
            if(pile[i] % start) copy_h --;
            //if(copy_h == 0 && pile == *piles.rbegin()) return start;
            if(copy_h < 0) break;
        }
        start ++;
        if(start == 20) return 0;
    }
    return 0;
}