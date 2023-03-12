#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    int n = nums.size();
    if(n <= 1) return 0;
    int maxpos = nums[0];
    int maxstep = nums[0];
    int minjump = 1;
    for(int i = 1; i < n; i ++){
        if(maxstep < i){
            minjump ++;
            maxstep = maxpos;
        }
        maxpos = max(maxpos, i + nums[i]);
        //cout << maxstep << " " << maxpos << endl;
    }
    return minjump;
}