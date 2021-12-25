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
    if(s.length() == 1){
        return searching(s, wordDict);
    }
    int len = 0;
    for(int i = 0; i < wordDict.size(); i++){
        if(wordDict[i].length() > len) len = wordDict[i].length();
    }
    int last = 0;
    for(int i = 0; i < s.length(); i++){
       // cout << s.substr(last, i - last + 1 ) << "!!"<<endl;
        //cout << searching(s.substr(last, i - last + 1), wordDict) << endl;
        last = len + i;
        if(last > s.length()) last = s.length() - i;
        for(int l = last; l > 0; l--){
            cout << s.substr(i ,l ) << endl;
             if(searching(s.substr(i, l ), wordDict)){
                ans[i + l - 1] = 1;
        }
        }
        
        
        
    }
    //printer(ans);
    return ans[ans.size()-1];
}