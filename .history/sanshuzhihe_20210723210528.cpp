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
    vector<vector <int> > ret;
    int i=0, j = 1, z= 2;
    int len = nums.size();
    
    int  old_i=0, old_j=1, old_z=2;
    int time = 0;
    
    while(old_i < len - 2){
        //cout << "start with "<< nums[i] <<" " << nums[j] << " "<< nums[z] << endl;
        if(!check_go_over(nums[i], nums[j])){
            cout  << "actually go over " << nums[i] <<" " << nums[j] << " "<< nums[z] << endl;
            if(nums[i] + nums[j] + nums[z] == 0){
                
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[z]);
                ret.push_back(temp);
                temp.clear();
            }else{
                fail_vec.push_back(nums[i] + nums[j]);
            }
        }
        z ++;
        if(z == len){
            j ++;
            z = j + 1;
        }
        if(j == len -  1){
            old_i  ++;
            i =  old_i;
            j = i + 1;
            z = j + 1;
            
        }
    

    }
    return ret;

}


void printer(){
    cout <<"hello, world!"<<endl;
}