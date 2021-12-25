#include<iostream>
#include<vector>
using namespace std;

int nthUglyNumber(int n ){
    if(n == 1) return 1;
    int i = 1;
    vector<int> vec;
    while(i <n){
        if(!(i % 2) ){
            vec.push_back(i);
        }else if(!(i % 3) ){
            vec.push_back(i);
        }else if(!(i % 5) ){
            vec.push_back(i);
        }
         i++;
    }
    return vec.back();
}