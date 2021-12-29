#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printerIsland(vector<vector<int>> &island){
    int wid = island[0].size();
    int hei = island.size();
    for(int r =0; r <hei; r++){
        for(int t = 0; t < wid; t++){
            cout << island[r][t] << " ";
        }
        cout << endl;
    }
}

int recurArea(vector<vector<int>> &mygrid, int wid, int hei,int x, int y){
    if(x < 0 || y < 0) return 0;
    if(x >= wid || y >= hei) return 0;
    if(mygrid[y][x] == 0 ) return 0;
    mygrid[y][x] = 0;
    int num = 1;
    //printerIsland(mygrid);
    num += recurArea(mygrid, wid, hei, x+1, y);
    num += recurArea(mygrid, wid, hei, x-1, y);
    num += recurArea(mygrid, wid, hei, x, y+1);
    num += recurArea(mygrid, wid, hei, x, y-1);
    
    return num;
}


int maxAreaOfIsland(vector<vector<int>>& grid) {
    int width = grid[0].size();
    int height = grid.size();
    int ret = 0;
    for(int d = 0; d< height; d++){
        for(int e =0 ; e< width; e++){
            if(grid[d][e]){
                    ret = max(ret, recurArea(grid, width, height, e, d) );
            }
        }
    }
    
    return ret;
}