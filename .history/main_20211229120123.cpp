#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;



int main(void){
    vector<vector<int>> test1 = {
        {1,3,1},
        {1,5,1},
        {4,2,1},
    };
    cout << minPathSum(test1) <<endl;

    return 0;
}



