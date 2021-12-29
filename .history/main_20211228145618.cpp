#include "header.h"
#include <iostream>
#include <vector>
//#include <conio.h>
#include <unordered_set>
using namespace std;



int main(void){
    vector<vector<int>> test1 = {{0,0,0},{0,1,0},{0,0,0}};
    vector<vector<int>> test2 = {{0,1},{0,0}};
    vector<vector<int>> test3 = {{0,0},{0,1}};
    vector<vector<int>> test4 = {{0,0},{1,1},{0,0}};
    cout << uniquePathsWithObstacles(test1) << endl;
    cout << uniquePathsWithObstacles(test2) << endl;
    cout << uniquePathsWithObstacles(test3) << endl;
    cout << uniquePathsWithObstacles(test4) << endl;
    return 0;
}



