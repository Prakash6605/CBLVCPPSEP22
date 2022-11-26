#include<bits/stdc++.h>
using namespace std;

void insertBottom(stack<int>& st , int data){
   // base case
   if(st.empty()){
    st.push(data);
    return;
   } 

   // 
   int t = st.top();
   st.pop();

   insertBottom(st,data);

   st.push(t);

   return;

}

void reverseStack(stack<int>& st){

    if(st.empty()){
        return;
    }

    int t = st.top();
    st.pop();

    reverseStack(st);

    insertBottom(st,t);

    return;

}



int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // insertBottom(s,100);

    // while(s.empty() == false){
    //     cout << s.top() << " ";
    //     s.pop() ;
    // }

    reverseStack(s);
    
    while(s.empty() == false){
        cout << s.top() << " ";
        s.pop() ;
    }


}