#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<string> reorderLogFiles(vector<string>& logs) {
    vector<string> ans;
    vector<string> str;
    vector<string> dig;
    map<string, string> mymap;
    for(string str: logs){
        if(isdigit(str[str.find_first_of(' ') + 1])){
            dig.push_back(str);
        }else{
            mymap.insert({str.substr(0, str.find_first_of(' ')) ,str});
        }
    }
    for(auto c : mymap){
        ans.push_back(c.second);
    }
    for(auto c: dig){
        ans.push_back(c);
    }
    return ans;
}