#include<iostream>
#include<vector>
#include"print_1d_array.cpp"
#include<unordered_map>
using namespace std;

vector<int> prisonAfterNDays(vector<int>& cells, int n) {
      vector<int> cell = cells;
      unordered_map< int, vector<int> > mymap;
      set<vector<int> > myset;
     // mymap[cells] = 0;
      mymap[0] = cells;
     int period = 0;
      for(int i = 1; i <= n; i++){
            for(int c = 0; c < cells.size() ; c++){
                  if(c == 0 || c == cells.size() - 1){
                        cell[c] = 0;
                        continue;
                  }
                  if(cells[c - 1] == cells[c + 1] ){
                        cell[c ] = 1;
                  }else{
                        cell[c ] = 0;
                  }
            }
          //  print_1d_array(cell);
          if(myset.count(cell)) break;
            myset.insert(cell);
          if(mymap.begin()->second == cell){
                  period = i;
                  break;
          }else{
                  mymap[i] = cell;
          }
            cells = cell;
      }
      period = myset.size();
      int day = n % period;
      return mymap[day ? day  : period ];
      
}