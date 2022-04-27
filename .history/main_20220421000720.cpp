#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
#include <iomanip>
using namespace std;



int main(void){
    vector<int> vec1 = {1,2,1};
    vec1.insert(vec1.begin() + 1, 4);
    for(auto &it : vec1){
        cout << it <<endl;
    }
    return 0;
}



