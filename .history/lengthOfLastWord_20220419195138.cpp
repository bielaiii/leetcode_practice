#include<iostream>
using namespace std;

int lengthOfLastWord(string s){
    int right = s.length() - 1;
   while(s[right] == ' ') right--;
   int left = right ;
   while(left > 0 && s[left] != ' ') left --;
   return right - left; 
   
}