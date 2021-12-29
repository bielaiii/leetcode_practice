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

template<typename T>
void printer2(T toprint){
    for(int e = 0;e < toprint.size(); e++){
        for(int d =0; d < toprint[e].size(); d++){
            cout << toprint[e][d] << " ";
        }
        cout << endl;
    }
    
        cout << endl;
}

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
    printer2(paths);
    return paths[m-1][n-1];
}