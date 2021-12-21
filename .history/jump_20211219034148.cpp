#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    for(int i = 0; i < nums.size() ;i++){
        int longest = 0;
        for(int s = i; s < i + nums[i]; s++){
            longest = max(longest, nums[s]);
        }
        nums[i] = longest;
    }
    int step = 1;
    for(int e = 0; e < nums.size(); e++){
        cout << nums[e] << " ";
    }
    cout << endl;
    return step;
}