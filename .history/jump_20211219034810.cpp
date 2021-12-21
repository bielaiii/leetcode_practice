#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    vector<int> step (nums.siz(), 0);
    for(int i = 0; i < nums.size() ;i++){
        int longest = 0;
        for(int s = i; s < i + nums[i]; s++){
            if(s < nums.size()){
                longest = max(longest, nums[s]);
            }
            
        }
        nums[i] = longest;
    }
    
    cout << endl;
    return step;
}