#include<iostream>
#include<vector>
#include<map>
#include<set>
#include"header.h"
#include<algorithm>
using namespace std;

vector<string> reorderLogFiles(vector<string>& logs) {
    vector<string> ans;
    vector<string> log;
    vector<string> dig;
    
    for(string str: logs){
        if(isdigit(str[str.find_first_of(' ') + 1])){
            dig.push_back(str);
        }else{
            log.push_back(str);
        }
    }
    sort(log.begin(), log.end(), [](string  a, string  b){
        int id1 = a.find_first_of(' ');
        int id2 = b.find_first_of(' ');
        int len1, len2;
        if(a.substr(id1 + 1) == b.substr(id2 + 1)){
            a = a.substr(0, id1 );
            b = b.substr(0, id2 );
            return a < b;
        }else{
            
            a = a.substr(id1 + 1);
            b = b.substr(id2 + 1);
            return a < b;
            
        }
        
    });
   // printer(log);
    for(auto c : log){
        ans.push_back(c);
    } 
    for(auto c: dig){
        ans.push_back(c);
    }
    return ans;
}