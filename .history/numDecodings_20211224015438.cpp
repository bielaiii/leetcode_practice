#include<iostream>
#include<vector>
using namespace std;

int transfer(string s){
    return stoi(s) > 0 && stoi(s) < 27? 1 : 0;
}


int numDecodings(string s){
    if(! s[0]) return 0;
    vector<int> ans;
    ans.push_back(transfer(s.substr(0,1)));
    cout << ans[0] << endl;
    if(s.length() > 1){
        ans.push_back(ans[0] +  transfer(s.substr(1,1)) + transfer(s.substr(0,2)));
        cout << ans[1] <<endl;
    }
    
    for(int i = 2; i < s.length(); i++){
        if(s.substr(i-1,1) == "0" ) continue;
        if(stoi(s.substr(i-1,2)) > 0 && stoi(s.substr(i-1,2)) < 27 )
         ans.push_back(ans[i-2] + ans[i - 1]);
        
    //cout << ans.size() - 1 <<endl;
    return ans[ans.size()-1];
}