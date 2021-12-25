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
    for(int i = 0; i < wordDict.size();){
        if(wordDict[i].length() > len) len = wordDict[i].length();
    }
    int last = 0;
    for(int i = 0; i < s.length(); i++){
        last = len + i;
        if(last >= s.length()) last = s.length() - i ;
        while(last > 0){
           // cout << s.substr(i ,l ) << endl;
            if(searching(s.substr(i, last ), wordDict)){
                ans[i + last  - 1] = 1;
               // i += l;
                break;
            }
            last --;
        }
        if(ans[i+last-1]){
            i += l;
        }else{
            i ++;
        }
    }
    return ans[ans.size()-1];
}