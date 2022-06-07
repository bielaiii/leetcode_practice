#include<iostream>
#include<vector>
using namespace std;

double formua(int n, int a ){
    return n/a - (a-1)/2;
}

int consecutiveNumbersSum(int n) {
    int ret = 0;
    int a = 0;
    double fol = formua(n ,a);
    cout << fol <<endl;
    while(fol > 1){
        if(fol - int(fol) == 0) ret ++;
        a ++;
        fol = formua(n,a);
        cout << fol <<endl;
    }
    return ret;
}