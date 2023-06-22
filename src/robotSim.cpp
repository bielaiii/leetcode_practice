#include<iostream>
#include<cmath>
#include<set>
using namespace std;

vector<int> checkAvail(const vector<vector<int>>& obstacles, int x, int y, int xlen, int ylen) {
    int tempX = x + xlen;
    int tempY = y + ylen;
    for (auto obstacle : obstacles) {
        if (obstacle[0] == x && obstacle[1] <= tempY && obstacle[1] > y) {
            return {obstacle[0], obstacle[1] - 1};
        } else if (obstacle[1] == y && obstacle[0] <= tempX && obstacle[0] > x) {
            return {obstacle[0] - 1, obstacle[1]};
        }
    }
    return {tempX, tempY};
}


int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
    set<pair<int, int>> st;
    for (auto obstacle : obstacles) {
        st.insert({obstacle[0], obstacle[1]});
    }
    const int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int head = 0;
    int originX = 0;
    int originY = 0;
    int distance = 0;
    for (auto command : commands) {
        if (command == -2) {
            head = (head + 4 - 1) % 4;
        } else if (command == -1) {
            head = (head + 4 + 1) % 4;
        } else {
            //vector<int> temp = checkAvail(obstacles, originX, originY, dir[head][0] * command, dir[head][1] * command);
            int tempX = originX;
            int tempY = originY;
            for (int i = 0; i < command; i++) {
                tempX += dir[head][0];
                tempY += dir[head][1];
                if (st.find({tempX, tempY}) != st.end()) {
                    tempX -= dir[head][0];
                    tempY -= dir[head][1];
                    break;
                }
            }
            originX = tempX;
            originY = tempY;
            distance = max(tempX * tempX + tempY * tempY, distance);
        }
    }
    return distance;
}