#include<bits/stdc++.h>
using namespace std;

int knapSackRecursion(int wt[] , int pt[] , int n , int capacity , vector<vector<int>>& dp){


    // base cases
    if( n == 0 || capacity == 0){
        return 0;
    }

    // search
    if(dp[n][capacity] != -1){
        return dp[n][capacity];
    }

    // options 
    // option 1 : include the current weight ( wt[n-1])
    int opt1 = 0 ;

    if(capacity >= wt[n-1]){
        opt1 = pt[n-1] + knapSackRecursion(wt,pt,n-1,capacity-wt[n-1],dp);
    }

    // option 2 , exclude the current weight
    int opt2 = 0 + knapSackRecursion(wt,pt,n-1,capacity,dp);

    return dp[n][capacity] = max(opt1,opt2);



}


int main(){

    int capacity = 4;
    int n = 3;
    int wt[] = {4,5,1};
    int pt[] = {1,2,3};

    vector<vector<int>> dp(n+1,vector<int>(capacity+1,-1));


    int ans = knapSackRecursion(wt,pt,n,capacity,dp);

    cout << " ans " << ans << endl;


    return 0;
}