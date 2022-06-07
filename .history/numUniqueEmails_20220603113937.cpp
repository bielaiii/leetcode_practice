#include<iostream>
#include<vector>
#include<set>
using namespace std;


int numUniqueEmails(vector<string>& emails) {
    int ret = 0;
    set<string> dict_;
    for(auto email : emails){
        email.replace(email.find("."), email.find(".") + 1 , "");
        string temp = email.substr(0, email.find_first_of("+@"));
        temp += email.find("@");
        cout << temp <<endl;
        if(! dict_.count(temp)){
            dict_.insert(temp);
            ret ++;
        }
    }
    return ret;
}