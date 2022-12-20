#include<bits/stdc++.h>
using namespace std;


int waysToNthStair(int n , int dp[])
{
    if( n < 0 ){
        return 0;
    }

    if( n == 0 ){
        return 1;
    }

    if( n == 1 ){
        return 1;
    }

    if( dp[n] != -1){
        return dp[n];
    }

    return dp[n] = waysToNthStair(n-1,dp) + waysToNthStair(n-2,dp) + waysToNthStair(n-3,dp);

}
int main(){

    int n = 4;

    // storage 
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1 ;
    dp[2] = 2 ;

    for(int i = 3 ; i < n + 1 ; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cout << " result : " << dp[n] << endl;
    

    // memset(dp,-1,sizeof(dp));

    // cout << " Res : " << waysToNthStair(n , dp) << endl;

}