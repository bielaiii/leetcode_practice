#include<iostream>
#include<vector>
using namespace std;

int findClosest(vector<string>& words, string word1, string word2) {
    int j = -9999, z= -9999;
    int closest = INT8_MAX;
    for(int i = 0; i < words.size(); i++){
        if(words[i] == word1){
            j = i;
          //  closest = min(closest, abs(z - j));
        }else if(words[i] == word2){
            z = i;
          //  closest = min(closest, abs(z - j));
        }
        if(j >= 0 && z >= 0){
            closest = min(closest, abs(z - j));
        }
    }
    return closest;
}