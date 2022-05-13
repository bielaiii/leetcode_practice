
#include<iostream>
#include<vector>
using namespace std;

int minDeletionSize(vector<string>& strs) {
        vector<vector<char>> vec;
        for(int i = 0; i < strs.size(); i++){
            vector<char> temp;
            for(int j = 0; j < strs[i].length(); j++){
                temp.push_back(strs[i][j]);
            }
            vec.push_back(temp);
        }
        int col  = 0;
        for(int i = 0 ; i < vec[0].size(); i++){
            for(int j = 1; j <vec.size(); j++){
                if(vec[j-1][i] > vec[j][i]){
                    col ++;
                    continue;
                }
                cout << col <<endl;
            }
        }
        return col;
    }