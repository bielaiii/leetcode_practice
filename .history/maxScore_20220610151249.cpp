#include<iostream>
#include<vector>
using namespace std;

int maxScore(string s){
    int left = 0, right = 0;
    if(s[0] == '0') left = 1;
    for(int j = 1; j < s.length(); j++)
    {
        if(s[j] == '1') right ++;
    }
    cout << "right " << right <<endl;
    int sum = 0;
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] == '0'){
            left ++;
        }else{
            right --;
        }
        cout << left <<" "<< right <<endl;
        sum = max(sum, left + right);

    }
    return sum;
}