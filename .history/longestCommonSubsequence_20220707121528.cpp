#include<iostream>
#include<vector>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
    vector<vector<int>> vec (text1.size() + 1, vector<int>(text2.size() + 1, 0));
    int i = 1, j = 1;
    for(i = 0; i < text1.size(); i++){
        for(j = 0 ; j < text2.size(); j++){
            if(text1[i] == text1[j] ){
                vec[i+1][j+1] = vec[i+1][j-1+1] + 1;
            }else{
                vec[vec]
            }
        }
    }
}