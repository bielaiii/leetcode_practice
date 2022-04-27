#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
#include <iomanip>
using namespace std;


template<class T>
void printer(vector<T> vec){
    for(auto &it : vec){
        cout << it << " -> ";
    }
    cout << endl;
}


int main(void){
    vector<int> vec1 = {1,2,1};
    vec1.insert(vec1.begin() + 1, 4);
    printer(vec1);
    vector<int> vec2 = {10,20,30};
    vec1.swap(vec2);
    printer(vec1);
    printer(vec2);
    return 0;
}



