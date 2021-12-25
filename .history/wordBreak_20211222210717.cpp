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
    for(int i = 0; i < wordDict.size(); i ++){
        if(wordDict[i].length() > len) len = wordDict[i].length();
    }
    for(int i = 0; i < s.length(); i++){
        for(int j = i + 1; j < s.length(); j++){
            
        }
    }
    return ans[ans.size()-1];
}