#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
using namespace std;

int minStickers(vector<string>& stickers, string target) {
    unordered_map<char, int> map_;
    unordered_map::iterator it;
    for(int i = 0; i < stickers.size(); i++){
        //string  tmp = stickers[i];
        for(int j = 0; j < stickers[i].size(); j++){
            if((auto it = map_.find(stickers[i][j]))){

            }else{

            }
        }
    }
}