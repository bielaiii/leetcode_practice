#include "header.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct mydata {
    int begin;
    int end;
    int len;
    mydata(int begin_, int end_, int len_)
        : begin(begin_), end(end_), len(len_) {};
};

int findMinimumTime(vector<vector<int>>& tasks) {
    int sz = tasks.size();
    sort(tasks.begin(), tasks.end(),
         [](vector<int> head, vector<int> end) -> bool { return head[1] < end[1]; });
    vector<int> run(tasks[sz - 1][1] + 1);   

    int ans = 0;
    for (int i = 0; i < sz; i++) {
        int start = tasks[i][0];
        int end = tasks[i][1];
        int len = tasks[i][2];
        //len -= accumulate(tasks[i][1], tasks[i][0], 0);
        
    
    }

    return 0;
}