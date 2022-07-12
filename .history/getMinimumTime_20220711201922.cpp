#include<iostream>
#include<vector>
using namespace std;

int getMinimumTime(vector<int>& time, vector<vector<int>>& fruits, int limit) {
    int sum = 0;
    for(vector<int> fruit : fruits){
        sum += (fruit[1] / min(limit, time[fruit[0]])  + fruit[1] % min(limite , time[fruit[0]]) );
    }
    return sum;
}