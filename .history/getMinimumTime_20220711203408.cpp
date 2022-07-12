#include<iostream>
#include<vector>
using namespace std;

int getMinimumTime(vector<int>& time, vector<vector<int>>& fruits, int limit) {
    int sum = 0;
    for(vector<int> fruit : fruits){
        sum +=  (( fruit[1] / limit + (fruit[1] % limit ? 1 : 0) ) * time[fruit[0]] );
       
    }
    return sum;
}