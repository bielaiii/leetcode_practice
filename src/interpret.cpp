#include<iostream>
#include<vector>
using namespace std;

string interpret(string command) {
      string str = "";
      for(int i = 0; i < command.size(); i ++ ){
            if(command[i] == 'G'){
                  str += 'g';
            }else if(command[i] == '('){
                  if(command[i + 1] == ')'){
                        i ++;
                        str += 'o';
                  }else{
                        i += 3;
                        str += "al";
                  }
            }
      }
      return str;
}