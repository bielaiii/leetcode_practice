#include "header.h"
//return true if fail_arr not contain the sum
vector<int> fail_vec;
vector<vector <int> > ret;
bool check_go_over(int num1, int num2){
    int sum = num1 + num2;
    for(int f = 0; f < fail_vec.size(); f++){
        if(sum == fail_vec[f]) return true;
    }
    return false;
}

bool check_duplicate(vector<int> add){
    sort(add.begin(), add.end());
    for(int y = 0; y < ret.size(); y++){
        vector<int> temp_vec = ret[y];
        sort(temp_vec.begin(), temp_vec.end());
        if(temp_vec == add) return true;
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
    
    int i=0, j = 1, z= 2;
    int len = nums.size();
    
    int  old_i=0, old_j=1, old_z=2;
    int time = 0;
    
    while(old_i < len - 2){
        //cout << "start with "<< nums[i] <<" " << nums[j] << " "<< nums[z] << endl;
        if(!check_go_over(nums[i], nums[j])){
            if(nums[i] + nums[j] + nums[z] == 0){
                cout  << "actually go over " << nums[i] <<" " << nums[j] << " "<< nums[z] << endl;
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[z]);
            //    cout << "duplicate "<<(!check_duplicate(temp)) <<endl;
                if(!check_duplicate(temp)) ret.push_back(temp);
                temp.clear();
                
            }
        }
        z ++;
        if(z == len){
            j ++;
            z = j + 1;
            fail_vec.push_back(nums[i] + nums[j]);
        }
        if(j == len -  1){
            old_i  ++;
            i =  old_i;
            j = i + 1;
            z = j + 1;
        }
       // cout  << old_i <<endl;

    }
    return ret;

}


void printer(){
    cout <<"hello, world!"<<endl;
}