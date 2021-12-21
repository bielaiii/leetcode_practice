#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    if(nums.size() == 1) return 1;
    for(int i = 0; i < nums.size(); i++){
        nums[i]  += i;     
    }
    for(int i = 0; i < nums.size(); i++)
        cout << nums[i];
    cout << endl;
    int i = 0;
    int count = 1;
    while ( nums[i] <  nums.size())
    {
        i += nums[i];
        cout << nums[i] <<endl;
        if(nums[i] < nums.size()){
            count ++;
        }
    }
    return count;
}