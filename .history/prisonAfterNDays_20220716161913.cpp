#include<iostream>
#include<vector>
#include"print_1d_array.cpp"
using namespace std;

vector<int> prisonAfterNDays(vector<int>& cells, int n) {
      vector<int> cell = cells;
      for(int i = 0; i < n; i++){
            for(int c = 0; c < cells.size() ; c++){
                  if(c == 0 || c == cells.size() - 1){
                        cell[c] = 0;
                        continue;
                  }
                  if((cells[c - 1] && cells[c + 1] ) || (!cells[c - 1] && !cells[c + 1] )){
                        cell[c ] = 1;
                  }else{
                        cell[c ] = 0;
                  }
            }
            print_1d_array(cell);
            cells = cell;
      }
      return cells;
}