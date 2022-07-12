#include<iostream>
#include<vector>
using namespace std;

int getMinimumTime(vector<int>& time, vector<vector<int>>& fruits, int limit) {
    int sum = 0;
    for(vector<int> fruit : fruits){
       // cout << fruit[1]/limit <<" " <<  fruit[1] % limit <<endl;
        sum +=  (( fruit[1] / limit +fruit[1] % limit ? 1 : 0 ) * time[fruit[0]] );
        cout << sum <<endl;
    }
    return sum;
}