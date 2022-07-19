#include<iostream>
#include<vector>
using namespace std;

vector<int> prisonAfterNDays(vector<int>& cells, int n) {
      vector<int> cell = cells;
      for(int i = 0; i < n; i++){
            for(int c = 1; c < cells.size() - 1; c++){
                  if((cells[c - 1] && cell[c + 1] ) || (!cells[c - 1] && !cell[c + 1] )){
                        
                  }
            }
      }
}