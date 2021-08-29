#include "header.h"
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int main(void){
    int arr[8][13] = {
    {0,0,1,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,1,1,0,1,0,0,0,0,0,0,0,0},
    {0,1,0,0,1,1,0,0,1,0,1,0,0},
    {0,1,0,0,1,1,0,0,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,1,1,1,0,0,0},
    {0,0,0,0,0,0,0,1,1,0,0,0,0}
    };
    vector<vector<int>> vec;
    vector<int> temp;
    for(int d = 0; d < 8; d ++){
        for(int r =0;r < 13; r++){
            
            temp.push_back(arr[d][r]);
        }
        vec.push_back(temp);
        temp.clear();

    }
    cout << maxAreaOfIsland(vec) <<endl;
    
    return 0;
}



