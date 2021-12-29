#include<iostream>
#include<vector>
using namespace std;


int recur(int m, int n){
    if(m == 0 && n == 0){
        return 1;
    }
    if(m > 0 && n > 0){
        return 1 + recur(m - 1, n) + recur(m , n - 1); 
    }else if(m > 0 && n == 0){
        return 1 + recur(m - 1, n);
    }else if(n > 0 && m == 0){
        return 1 + recur(m, n - 1);
    }
    return 0;
}

int uniquePaths(int m, int n) {
    vector<vector<int>> paths (m, vector<int>(n, 0));
    for(int mm = m-1; mm > 0; mm--){
        for(int nn = n-1; nn > 0; nn --){
            if(mm == m- 1|| nn == n-1){
                paths[mm][nn] = 1;
            }else{
                paths[mm][nn] = paths[mm + 1][nn] + paths[mm][nn + 1];
            }
            //cout  << mm << " " << nn <<endl;
        }
    }
    printer(paths);
    return paths[0][0];
}