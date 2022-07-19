#include<iostream>
#include<vector>
#include"print_1d_array.cpp"
#include<unordered_map>
using namespace std;

vector<int> prisonAfterNDays(vector<int>& cells, int n) {
      vector<int> cell = cells;
      unordered_map< int, vector<int> > mymap;
     // mymap[cells] = 0;
      mymap[0] = cells;
     int period = 0;
     n %= 64;
      for(int i = 1; i <= n; i++){
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
          //  print_1d_array(cell);
          
          if(cell == mymap.begin()->second){
                  period = i;
                  break;
          }else{
                  mymap[i] = cell;
          }
            cells = cell;
      }
      return mymap[period  < n? n  : n % period ];
      
}