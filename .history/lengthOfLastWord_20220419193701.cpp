#include<iostream>
using namespace std;

int lengthOfLastWord(string s){
   /* int right = s.length() - 1;
   while(s[right] == ' ') right--;
   int left = right - 1;
   while(s[left] != ' ') left --;
   return right - left; */
   stringstream ss(s);
   string word;
   int len = 0;
   while(ss >> word){
       len = word.length();
   }
   return len;
}