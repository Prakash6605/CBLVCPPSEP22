#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int wineProblem(int front , int end , int year , int arr[]){

    if( front > end ){
        return 0;
    }

    if(dp[front][end] != -1){
        return dp[front][end];
    }


    // option 1 -> sell from the front
    int sellFront = (arr[front] * year) + wineProblem(front + 1 , end , year + 1 ,arr );

    // option 2 -> sell from the end

    int sellEnd = (arr[end] * year ) + wineProblem(front , end - 1 , year + 1 , arr);


    int ans = max(sellFront , sellEnd);
    dp[front][end] = ans;
    return ans; 

}

int main(){

    int arr[] = {2,4,6,2,5};
    int n = 5 ;
    int front  = 0 , end = n - 1 , year = 1 ;

    memset(dp,-1,sizeof(dp));

    int ans = wineProblem(front,end,year,arr);

    cout << " ans : " << ans << endl;

}