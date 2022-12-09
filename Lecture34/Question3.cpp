#include<bits/stdc++.h>
using namespace std;
bool isDigit(char ch){

    if(ch >= '0' && ch <= '9'){
        return true;
    }
    return false;

}
int helper(string str){
    int l = str.length();

    stack<int> s;


    for(int i = 0 ; i < l ; i++){
        if(isDigit(str[i])){
            // string ele = "";
            // ele = ele + str[i];
            s.push(str[i] - '0');
        }else{

            int b = s.top(); s.pop();
            int a = s.top() ; s.pop();

            if(str[i] == '+'){
                s.push(a+b);
            }else if(str[i] == '-'){
                s.push(a-b);
            }else if(str[i] == '*'){
                s.push(a*b);
            }else{
                s.push(a/b);
            }
        }
    }

    return s.top(); 
}

int main(){

    string str = "231*+9-";

    int ans = helper(str);

    cout << " ans : " << ans << endl;

}