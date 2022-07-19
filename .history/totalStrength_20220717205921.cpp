#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int totalStrength(vector<int>& strength) {
      vector<int> vec(strength.size() + 1, 0);

      for(int i = 1; i <= strength.size(); i++ )[
            vec[i] = vec[i-1] + strength[i - 1];
      ]
      int count = 0;

      return count ;
}