#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int nextGreaterElement(int n) {
   string str = itoa(n);
   sort(str.begin(), str.end());
   int ans = stoi(str);
   return ans == n> -1 : ans;
}