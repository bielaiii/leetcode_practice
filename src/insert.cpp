#include <algorithm>
#include<iostream>
#include <map>
#include<vector>
using namespace std;
vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
{
    vector<vector<int>> temp = intervals;
    temp.push_back(newInterval);
    auto comp = [](const vector<int>& t1, int val) {
        return t1[0] <= val;
    };
    int target = newInterval[0];
    //auto it = upper_bound(temp.begin(), temp.end(), target, comp);
    //while (it != temp.end() )
    //{
//
    //    it++;
    //}
    return {};
}