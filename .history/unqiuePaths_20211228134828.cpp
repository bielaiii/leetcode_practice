#include<iostream>
#include<vector>
using namespace std;


int uniquePaths(int m, int n) {
    int paths = 0;
    int mm = m - 1; int nn =  n -2;
    while(mm > 0 && nn > 0){
        if(mm > 0 && n > 0){
            paths += 2;
            mm --;
            nn --;
        }else if(mm > 0 && nn ==0){
            mm --;
            paths++;
        }else if(nn > = && mm == 0){
            nn --;
            paths++;
        }
    }
    return paths;
}