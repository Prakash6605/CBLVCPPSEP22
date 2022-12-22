#include<bits/stdc++.h>
using namespace std;

int main(){

    int sum = 4;
    int coins[] = {1,2,3};
    int n = 3 ;
    int dp[n+1][sum+1];
    memset(dp,0,sizeof(dp));
    for(int i = 0 ; i < n + 1 ; i++){
        dp[i][0] = 1 ;
    }

    for(int i = 0 ; i < n + 1 ; i++){
        for(int j = 0 ; j <  sum + 1 ; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    for(int curCoin = 1 ; curCoin < n + 1 ; curCoin++){

        for(int curSum = 1 ; curSum < sum + 1 ; curSum++){

            if( curSum < coins[curCoin-1]){
                dp[curCoin][curSum] = dp[curCoin-1][curSum];
            }else{
                dp[curCoin][curSum] = dp[curCoin-1][curSum] + dp[curCoin][curSum-coins[curCoin-1]];
            }

        }

    }

    cout << " =========== " << endl;

     for(int i = 0 ; i < n + 1 ; i++){
        for(int j = 0 ; j <  sum + 1 ; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}