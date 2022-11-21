#include<bits/stdc++.h>
using namespace std;


bool checkBalanced(string str){

    int l = str.length();

    stack<char> sc;

    for(int i = 0 ; i < l ; i++){
        // if opening bracket
        if(str[i] == '{' || str[i] == '[' || str[i] == '('){
            sc.push(str[i]);
        }else{
            // closing brackets
            if(str[i] == '}'){
                // expecting '{'
                if(sc.empty() == true || sc.top() != '{')return false;

                sc.pop();
            }else if(str[i] == ']'){
                // expecting '['
                if(sc.empty() || sc.top() != '[')return false;
                sc.pop();
            }else{
                // ')'
                // expection '('

                if(sc.empty() || sc.top() != '(')return false;
                sc.pop();
            }

        }
    }

    return sc.empty();


}

int main(){


    // string str = "{[]}()";
    string str = "[{}]())";

    if(checkBalanced(str)){
        cout << " True " << endl;
    }else{
        cout << " False " << endl;
    }


}