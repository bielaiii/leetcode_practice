#include<iostream>
#include<vector>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.size() == 1) return triangle[0][0];
    int mini1 = triangle[0][0];
    int mini2 = min(mini1 + triangle[1][0], mini1 + triangle[1][1]);
    int i = triangle[1][0] < triangle[1][1]? 0 : 1;
    vector<int> ans = {mini1, mini2};
    cout << ans[0]<< " "<< ans[1] << endl;
    for(int c = 2; c < triangle.size(); c++){
        cout << ans[ans.size()-1]+triangle[c][i] << " "<< ans[ans.size()-1]+triangle[c][i+1] <<endl;
        ans.push_back(min(ans[ans.size()-1]+triangle[c][i], ans[ans.size()-1]+triangle[c][i+1]));
    }
    return ans[ans.size()-1];
}