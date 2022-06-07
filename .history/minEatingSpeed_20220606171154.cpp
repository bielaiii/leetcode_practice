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
    while (start <= max_value)
    {
        int hh = h;
        for(auto pile : piles){
           hh -= pile / start == 0? pile / start : pile / start + 1;
            if(pile == *piles.rbegin() && hh <= 0) return start;
            if(pile != *piles.rbegin() && hh <= 0) break;
        }
        cout << start << " " << hh << endl;
        start ++; 
    }
    return start;
}