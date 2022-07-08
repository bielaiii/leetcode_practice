#include<iostream>
#include<vector>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    vector<vector<int>> vec (text1.size() + 1, vector<int>(text2.size() + 1, 0));
    int i = 1, j = 1;
    for(i = 0; i < text1.size(); i++){
        for(j = 0 ; j < text2.size(); j++){
            if(text1[i] == text2[j] ){
                vec[i+1][j+1] = vec[i+1][j] + 1;
            }else{
                vec[i+1][j+1] = max(vec[i][j+1], vec[i+1][j+1-1]);
            }
        }
    }

    for(i = 0; i < text1.size() + 1; i++){
        for(j = 0; j < text2.size() + 1; j++){
            cout << vec[i][j] <<" ";
        }
        cout << endl;
    }
    return vec[text1.size()][text2.size()];
}