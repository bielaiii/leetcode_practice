#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
      vector<int> vt(n, 0);
      for(auto book : bookings){
            vt[book[0]-1] += book[2];
            if(book[1] < n){
                  vt[book[1]] -= book[2];
            }
      }
      for(int i = 1; i < n; i++){
           vt[i] += vt[i-1];
      }
      return vt;
}