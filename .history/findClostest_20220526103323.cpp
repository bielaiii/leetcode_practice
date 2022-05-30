#include<iostream>
#include<vector>
using namespace std;

int findClosest(vector<string>& words, string word1, string word2) {
    int j = 0, z=  0;
    int closest = INT8_MAX;
    for(int i = 0; i < words.size(); i++){
        if(words[i] == word1){
            j = i;
        }else if(words[i] == word2){
            z = i;
        }
        closest = min(closest, abs(z - j));
    }
    return closest;
}