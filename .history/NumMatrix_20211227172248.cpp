#include<vector>
#include<iostream>
using namespace std;

//class NumMatrix {
//public:

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

    vector<vector<int>> pre_sum;
    void NumMatrix(vector<vector<int>>& matrix) {
        vector<int> zeros(matrix[0].size() + 1, 0);
        //vector<int> zeros(matrix[0].size() + 1, 0);
        vector<vector<int>> dim_one;
        pre_sum.push_back(zeros);
         for(int c = 0; c < matrix.size() ; c++){
            vector<int> temp_  = {0};
            for(int r = 0; r < matrix[0].size() ; r++){ 
                if(r){
                    temp_.push_back(temp_[r - 1] + matrix[c][r]);
                }else{
                    temp_.push_back(matrix[c][r]);
                }
                
            }
            dim_one.push_back(temp_);
        }
        printer2(dim_one);
        for (int c = 0; c < matrix.size(); c++){
            vector<int> temp_;
            for(int r = 0; r < matrix[c].size(); r++){
                if(c){
                    temp_.push_back(dim_one[c-1][r] + dim_one[c][r]);
                }else{
                    temp_.push_back(dim_one[c][r]);
                }
                
            }
            pre_sum.push_back(temp_);
        }
        printer2(pre_sum);
    } 
    int sumRegion(int row1, int col1, int row2, int col2) {
        return pre_sum[row2][col2] - pre_sum[row1][col2] - pre_sum[row2][col1] + pre_sum[row1][col1];
    }
//};


int main(){
    vector<vector<int>> mat1 = {{3,0,1,4,2},{5,6,3,2,1},{1,2,0,1,5},{4,1,0,1,7},{1,0,3,0,5}};
    NumMatrix(mat1);
    printer2(pre_sum);
    return 0;
}