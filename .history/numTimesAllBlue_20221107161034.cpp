#include<iostream>
#include<vector>
using namespace std;

int numTimesAllBlue(vector<int>& flips) {
      vector<int> vec(flips.size() + 1, 0);
      vector<int> record (flips.size() + 1, 0);
      int left =flips[0], right = flips[0];
      int ct = 0 ;
      for(int i : flips){
            record[i] = 1;
            while(left > 0 && record[left ]) left --;
            if(left == 0) left = 1;
            while(right +1  <= flips.size() && record[right + 1]) right ++;
            cout << left <<" "<< right << " " << i <<endl;
            if(left == 1 && right >= i){
                  ct ++;
            }
      }
      return ct;
}