#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

vector<string> reorderLogFiles(vector<string>& logs) {
    vector<string> ans;
    vector<string> str;
    vector<string> dig;
    set<string>
    for(string str: logs){
        if(isdigit(str[str.find_first_of(' ') + 1])){
            dig.push_back(str);
        }else{
            string str = str.substr(str.find_first_of(' '));

            for(auto c : mymap){
                if(c.second == str ){
                    mymap[c.first + 'a'] = c.second;
                    continue;
                }
            }
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