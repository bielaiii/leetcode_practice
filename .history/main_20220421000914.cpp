#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
#include <iomanip>
using namespace std;


template<T,u>
T printer(vector<T> vec){
    for(auto &it : vec){
        cout << it << " -> ";
    }
    cout << endl;
}


int main(void){
    vector<int> vec1 = {1,2,1};
    vec1.insert(vec1.begin() + 1, 4);
    for(auto &it : vec1){
        cout << it <<endl;
    }
    vector<int> vec2 = {10,20,30};
    vec1.swap(vec2);
    return 0;
}



