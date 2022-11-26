#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int *arr , int n ){

    stack<int> s;
    vector<int> ans(n);

    ans[n-1] = -1;
    s.push(arr[n-1]);

    for(int i = n-2 ; i>= 0 ; i--){
        int t = s.top();
        // cout << " t " << t << endl;

        if( t >  arr[i]){
            ans[i] = t;
        }else{
            while(!s.empty() && s.top() < arr[i]){
                s.pop();
            }

            if(s.empty()){
                ans[i] = -1;
            }else{
                ans[i] = s.top();
            }
        }

        s.push(arr[i]);
    }

    return ans;

}

int main(){

    int arr[] = {3,5,6,0,9,8};

    vector<int> ans = nextGreater(arr , 6);
    // vector<int>:: iterator i ;
    // for(int i : ans){
    //     cout << i << " " ;
    // }
    vector<string> vs;
    vs.push_back("hello");
    vs.push_back(" coding ");
    vs.push_back(" block " );

    for(auto i : vs){
        cout << i << " " ;
    }
}