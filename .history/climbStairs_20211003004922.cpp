#include<iostream>
using namespace std;

int recur(int time, int &step){
    if(time >= 2){
        recur(time-2, step+=1);
        recur(time-1, step+=1);
    }else if(time == 1){
        return 1;
    }

}

int climbStairs(int n) {
    int time = 0;
    recur(n, time);
    return time;
}