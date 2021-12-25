#include <iostream>
#include <vector>
using namespace std;

bool searching(string s, vector<string> dict){
    for(int i = 0; i < dict.size(); i++){
        if(dict[i] == s) return true;
    }
    return false;
}

template<typename T>
void printer(T toprint){
    for(int d =0; d < toprint.size(); d++){
       // for(int f = 0; f< toprint[d].size(); f++){
            cout << toprint[d] << " ";
        }
        cout << endl;
  //  }
    cout << "------------------"<<endl;
}

bool wordBreak(string s, vector<string>& wordDict) {
    vector<int> ans (s.size(), 0);
    ans[0] = 0;
    int last = 0;
    for(int i = 1; i < s.length(); i++){
        
        if(searching(s.substr(last, i - last + 1), wordDict)){
            last = i + 1;
            ans[i] = 1;
            cout << s.substr(last, i - last + 1) << " " << ans[i] << endl;
        }
        
    }
    //printer(ans);
    return ans[ans.size()-1];
}