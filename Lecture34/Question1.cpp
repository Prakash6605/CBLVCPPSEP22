#include<bits/stdc++.h>
using namespace std;

vector<int> generateFreqArray(int a[] , int n){


    vector<int> freq(n);
    int counter = 0 ;
    for(int i = 0 ; i < n ; i++){

        counter = 0 ;
        for(int j = 0 ; j < n ; j++){

            if(a[i] == a[j]){
                counter++;
            }
        }
        freq[i] = counter;
    }

    return freq;

}

vector<int> helper(int arr[] , int n){

    vector<int> freq = generateFreqArray(arr,n);
    vector<int> ans(n);

    stack<int> s;
    // ans[n-1]= -1;

    for(int i = n-1 ; i >= 0 ; i--){
        if(s.empty()){
            ans[i] = -1;
        }else{

            int top_pos = s.top();

            int tf = freq[top_pos];
            int cf = freq[i];
            if( tf > cf ){
                ans[i] = arr[top_pos];
            }else{

                while(s.empty() == false && freq[s.top()] <= cf){
                    s.pop();
                }

                if(s.empty()){
                    ans[i] = -1;
                }else{
                    ans[i] = arr[s.top()];
                }
            }
        }
        s.push(i);
    }

    return ans;

}


int main(){


    int arr[] = {1,1,2,3,4,2,1};
    int n = 7 ;

    vector<int> ans = helper(arr,n);

    for(auto i :  ans){
        cout << i << " " ;
    }

    return 0;



}