#include<bits/stdc++.h>
using namespace std;

void reverseStackUsingRecursion(stack<int>& sa , stack<int>& sb){


    // base case
    if(sa.empty() == true){
        return;
    }

    int te = sa.top();
    sb.push(te);

    sa.pop();

    reverseStackUsingRecursion(sa,sb);
   

}


int main(){

    stack<int> st;
    for(int i = 0; i < 5 ; i++){
        st.push(i+1);
    }
    stack<int> sb;
    reverseStackUsingRecursion(st,sb);

    while(sb.empty() == false){
        cout << sb.top() << " ";
        sb.pop();
    }
    // 1 ,2 3,4 ,5
    // 5, 4, 3, 2, 1 => 1, 2,3,4,5

}