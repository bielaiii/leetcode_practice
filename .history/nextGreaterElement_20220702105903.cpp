#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
   string str = to_string(n);
   sort(str.begin(), str.end(),[](char a, char b){
        return a > b;
   });
   int ans = stoi(str);
   return ans == n? -1 : ans;
}