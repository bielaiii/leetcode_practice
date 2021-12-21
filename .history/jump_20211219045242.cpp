#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums){
    vector<int> step (nums.size(), 999);
    int count = 1;
    step[0] =0;
    int i = 0;
    while(i < nums.size()){
        
        for(int t = 1; t <= nums[i]; t++){
            if(i +  t  < nums.size())
                step[i + t ] = min(count, step[i+t]);
        }
        i += nums[i] + 1;
     //   cout <<"i: " << i <<endl;
        i ++;
        count ++;
    }

    for(int i = 0; i < step.size(); i++){
        cout << step[i] << " ";
    }
    cout << endl;
    return step[step.size()-1];
}