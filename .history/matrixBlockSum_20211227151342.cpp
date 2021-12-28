#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
    vector<vector<int>> ans (mat.size(), vector<int>(mat[0].size(),0));
    for(int c = 0; c < mat.size(); c++){
        for(int r = 0; r < mat[0].size(); r++){
            int start_c = max(0, c - k);
            int end_c = min(int(mat.size()), c + k);
            int start_r = max(0, r - k);
            int end_r = min(int(mat[0].size()), r + k);
            int sum = 0;
            for(int cc = start_c; cc < end_c; cc++){
                for(int rr = start_r; rr < end_r; rr++ ){
                    cout << mat[cc][rr] << " ";
                    sum += mat[cc][rr];
                }
            }
            cout << endl;
            ans[c][r] = sum;
        }
    }
    return ans;
}