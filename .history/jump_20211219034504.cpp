#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    for(int i = 0; i < nums.size() ;i++){
        int longest = 0;
        for(int s = i; s < i + nums[i]; s++){
            if(s < nums.size()){
                longest = max(longest, nums[s]);
            }
            
        }
        nums[i] = longest;
    }
    int step = 1;
    int e = 0;
    while (e < nums.size())
    {
        e = nums[e];
        cout << e <<endl;
    }
    
    cout << endl;
    return step;
}