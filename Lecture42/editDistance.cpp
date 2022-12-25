#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1 = "geek";
    string str2 = "gesek";

    int l1 = str1.length();
    int l2 = str2.length();

    int dp[l1+1][l2+1];


    for(int i = 0 ; i <= l1 ; i++){
        for(int j = 0 ; j <= l2 ; j++){

            if( i == 0 ){
                dp[i][j] = j ;
            }
            else if( j == 0 ){
                dp[i][j] = i;
            }else{
                // equal characters
                if(str1[i-1] == str2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = 1 + min({ dp[i-1][j] , dp[i-1][j-1] , dp[i][j-1]});
                }
            }

        }
    }

    for(int i = 0 ; i <= l1 ; i++){
        for(int j = 0 ; j <= l2 ; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << " ans : " << dp[l1][l2] << endl;



}