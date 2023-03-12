#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

void recur(vector<string>& set, string s, int i){
    if(i == s.length()){
        set.push_back(s);
        return;
    }
    //string temp = s;
    if(isalpha(s[i])){
        
        
        s[i] = toupper(s[i]);
        recur(set, s, i+1);
        s[i] = tolower(s[i]);
        recur(set, s,i+1);
        
    }else{
        recur(set, s,i+1);
    }
    
    
   // vector<string>temp_vec = recur(set, s, n+1);
    //set.insert(set.end(), temp_vec.begin(), temp_vec.end());
 //   return set;
}

vector<string> letterCasePermutation(string s) {
    vector<string> ret;
    //ret.push_back(s);
    recur(ret, s, 0);
   /*  for(int i =0;i < ret.size(); i++){
        cout << ret[i] << endl;
    } */

    return ret;
}