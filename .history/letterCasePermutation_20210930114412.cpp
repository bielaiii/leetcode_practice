#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

vector<string> recur(vector<string>& set, string s, int n){
    if(n == s.length()) return set;
    string temp = s;
    if(islower(s[i])){ //capital  
        
        s[i] = toupper(s[i]);
        //set.push_back(temp);
    }else if(isupper(s[i])){
       // string temp = s;
        s[i] = tolower(s[i]);
        //set.push_back(temp);
    }
    
    vector<string>temp_vec = recur(set, s, n+1);
    //set.insert(set.end(), temp_vec.begin(), temp_vec.end());
    return set;
}

vector<string> letterCasePermutation(string s) {
    vector<string> ret;
    ret.push_back(s);
    ret = recur(ret, s, 0);
   /*  for(int i =0;i < ret.size(); i++){
        cout << ret[i] << endl;
    } */

    return ret;
}