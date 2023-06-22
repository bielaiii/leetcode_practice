#include<iostream>
#include<queue>
#include<vector>
#include"header.h"
#include"printer.h"
using namespace std;


int main()
{
    vector<int>commands = {4,-1,3};
    vector<vector<int>> obstacles = {};
    cout << robotSim(commands, obstacles) << endl;
    commands = {4,-1,4,-2,4};
    obstacles = {{2,4}};
    cout << robotSim(commands, obstacles) << endl;
    commands ={6,-1,-1,6};
    obstacles = {};
    cout << robotSim(commands, obstacles) << endl;
    commands = {-2,8,3,7,-1};
    obstacles = {{-4,-1},{1,-1},{1,4},{5,0},{4,5},{-2,-1},{2,-5},{5,1},{-3,-1},{5,-3}};
    cout << robotSim(commands, obstacles) << endl;
    commands = {7,-2,-2,7,5};
    obstacles = {{-3,2},{-2,1},{0,1},{-2,4},{-1,0},{-2,-3},{0,-3},{4,4},{-3,3},{2,2}};
    cout << robotSim(commands, obstacles) << endl;
    return 0;
}