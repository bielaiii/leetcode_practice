#include <iostream>
#include<vector>
using namespace std;

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}

int minFallingPathSum(vector<vector<int>>& matrix) {
    vector<int> layer = matrix[0];
    for(int i = 1; i < matrix.size(); i++){
        vector<int> temp = matrix[i];
        for(int j = 0; j < layer.size(); j++){
            int a = 99; int b = 99; int c = 99;
            if(j + 1 >= 0 && j + 1 < matrix[0].size()) a = matrix[i-1][j+1];
            if(j - 1 >= 0 && j - 1 < matrix[0].size()) b = matrix[i-1][j-1];
            c = matrix[i-1][j];
            layer[i] = min(a, min(b,c)) + matrix[i][j];
        }
        printer(layer);
    }
    printer(layer);
    int min_ = 99;
    for(int i = 0; i < layer.size(); i++){
        min_ = min(layer[i], min_);
    }
    return min_;
}