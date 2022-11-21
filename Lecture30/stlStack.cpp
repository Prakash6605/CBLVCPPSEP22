#include<bits/stdc++.h>
using namespace std;

string reverseString(string str){

    stack<char> st;
    string res = "";

    int l = str.length();
    for(int i = 0 ; i < l ; i++){
        st.push(str[i]);
    }

    while(st.empty() == false){
        res = res + st.top();
        st.pop();
    }
    return res;

}

int main(){

    // stack<int> s;

    // s.push(1);
    // s.push(2);
    // s.push(3);

    // cout << s.top() << endl;
    // cout << (s.empty() ? "True" : "False") << endl;
    // s.pop();

    // cout<<" top " << s.top() << endl;

    string str = "madam";

    cout << "Reversed String " << reverseString(str) << endl;


}