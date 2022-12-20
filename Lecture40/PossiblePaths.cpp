#include<bits/stdc++.h>
using namespace std;

int waysToReachDes(int n , int m , int i , int j, vector<vector<int>>& dp){

    if( i >= n || j >= m){
        return 0;
    }

    if( i == n - 1 && j == m -1 ){
        return 1;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int opt1 = waysToReachDes(n,m,i,j+1,dp);
    int opt2 = waysToReachDes(n,m,i+1,j,dp);

    return dp[i][j] = opt1 + opt2 ;

}

int main(){

    int n = 3 , m = 3 ;

    vector<vector<int>> dp(n,vector<int>(m,-1));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << dp[i][j] << " ";
        }
        cout<< endl;
    }

    cout <<" Result " <<  waysToReachDes(n,m,0,0,dp) << endl;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << dp[i][j] << " ";
        }
        cout<< endl;
    }

}