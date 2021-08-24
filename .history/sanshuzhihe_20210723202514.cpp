#include "header.h"
//return true if fail_arr not contain the sum
vector<int> fail_vec;

bool check_go_over(int num1, int num2){
    int sum = num1 + num2;
    for(int f = 0; f < fail_vec.size(); f++){
        if(sum == fail_vec[f]) return true;
    }
    return false;
}


int factorial(int len, int final){
    if(len <= 1) return final;
    final *= len;
    len -=1;
    return factorial(len,final);
}

vector<vector<int> > threeSum(vector<int>& nums){
    
    int i=0, j = 0, z= 0;
    int total = factorial(nums.size(),1);
    for(int i = 0;  i < total; i++){
        if(check_go_over(nums[1], nums[2])){
            if()
        }
    }

}


void printer(){
    cout <<"hello, world!"<<endl;
}