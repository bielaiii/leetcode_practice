#include<iostream>
#include<vector>
#include<set>
using namespace std;


int numUniqueEmails(vector<string>& emails) {
    int ret = 0;
    set<string> dict_;
    for(auto email : emails){
        email.erase(email.find_first_of('.'), 1);
        string temp = "";
        
        if(dict_.count(email)){
            dict_.ins
        }else{

        }
    }
}