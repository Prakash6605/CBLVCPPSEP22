#include<bits/stdc++.h>
using namespace std;

int fibo(int n , int dp[]){

    if( n == 1 || n == 0){
        return n;
    }

    // search , look into the storage
    if( dp[n] != -1){
        return dp[n];
    }

    dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
    return dp[n];

}
int main(){

    int n = 5;

    // storage 
    int dp[n+1];
    // for(int i = 0 ; i < n + 1 ; i++){
    //     dp[i] = -1;
    // }

    memset(dp,-1,sizeof(dp));

    // for(int i = 0 ; i <= n ; i++){
    //     cout << dp[i] << " ";
    // }

     cout <<" Result " <<  fibo(n,dp) << endl;

}