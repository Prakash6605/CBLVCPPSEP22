#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 5 ;

    // vector<vector<int>> adj_matrix();
    int adj_matrix[n][n];

    memset(adj_matrix,0,sizeof(adj_matrix));


    adj_matrix[0][1] = 1 ;
    adj_matrix[0][2] = 1 ;
    adj_matrix[1][0] = 1 ;
    adj_matrix[1][3] = 1 ;
    adj_matrix[1][4] = 1 ;
    adj_matrix[2][0] = 1 ;
    adj_matrix[2][3] = 1 ;
    adj_matrix[3][1] = 1 ;
    adj_matrix[3][2] = 1 ;
    adj_matrix[3][4] = 1 ;
    adj_matrix[4][1] = 1 ;
    adj_matrix[4][3] = 1 ;


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << adj_matrix[i][j] << " " ;
        }
        cout << endl;
    }

    cout << endl ;

    for(int i = 0 ; i < n ; i++){
        cout << i + 1 << " -> " ;
        for(int j = 0 ; j < n ; j++){
            if( adj_matrix[i][j] == 1 ){
                cout << j + 1 << " " ;
            }
        }
        cout<< endl;
    }
    
    
    


    return 0;
}