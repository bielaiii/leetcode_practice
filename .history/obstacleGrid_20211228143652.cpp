#include<iostream>
#include<vector>
using namespace std;

int uniquePaths(int m, int n) {
    vector<vector<int>> paths (m, vector<int>(n, 0));
    for(int mm = 0; mm < m; mm ++){
        for(int  nn =0; nn < n; nn++){
            if(mm == 0 || nn == 0){
                paths[mm][nn] = 1;
            }else{
                paths[mm][nn] = paths[mm-1][nn] + paths[mm][nn-1];
            }
        }
    }
   // printer2(paths);
    return paths[m-1][n-1];
}