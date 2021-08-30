#include <iostream>
#include <vector>
using namespace std;

void printer(vector<vector<int>> vec, int wid, int hei){
    for(int d =0; d < hei; d++){
        for(int f = 0; f < wid; f++){
            cout << vec[d][f] << " ";
        }
        cout <<endl;
    }
}


void recurFlood(vector<vector<int>> &myimage, int sr, int sc, int newColor,int oldColor, int wid, int hei){
    if(sr < 0 || sc < 0) return;
    if(sr >= hei || sc >= wid) return;
    if(myimage[sr][sc] == newColor || myimage[sr][sc] != oldColor) return;
    if(myimage[sr][sc] == oldColor){
        myimage[sr][sc] = newColor;
        //printer(myimage, wid, hei);
    }
    recurFlood(myimage, sr + 1, sc,newColor, oldColor, wid, hei);
    recurFlood(myimage, sr - 1, sc,newColor, oldColor, wid, hei);
    recurFlood(myimage, sr , sc+1,newColor,oldColor,  wid, hei);
    recurFlood(myimage, sr , sc - 1,newColor, oldColor, wid, hei);
    return ;
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int width = image[0].size();
    int height = image.size();
    int oldColor = image[sr][sc];
    recurFlood(image, sr, sc, newColor,oldColor, width, height);
    return image;
}