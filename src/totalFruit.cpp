#include <iostream>
#include <vector>
#include <map>
using namespace std;

int totalFruit(vector<int>& fruits) {
    int left = 0;
    int right = 0;
    int len = 0;
    int fruit1 = fruits[left];
    
    int fruit2 = fruits[right];
    while(right < fruits.size()){
        if(fruits[right] == fruit1 || fruit2 == fruits[right]){
            len = max(len , right + 1 - left);
            right++;
        }else{
            left = right - 1;
            fruit1 = fruits[left];
            while(left >= 1 && fruits[left-1] == fruit1) left --;
            fruit2 = fruits[right];
            len = max(len, right - left + 1);
        }
    }
    return len;
}