#include<iostream>
#include<vector>
#include<set>
using namespace std;


int numUniqueEmails(vector<string>& emails) {
    int ret = 0;
    set<string> dict_;
    for(auto email : emails){
        
        string temp = email.substr(0, email.find_first_of("+@"));
        if(temp.find(".") != string::npos)
            temp.replace(temp.find("."), temp.find(".") + 1 , "");
        temp.append(email.find("@"), email.end() );
        cout << temp << " " << email << endl;
        if(temp == "") continue;
        if(! dict_.count(temp)){
            dict_.insert(temp);
            ret ++;
        }
    }
    return ret;
}