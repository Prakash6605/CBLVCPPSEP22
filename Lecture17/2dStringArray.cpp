// 2dStringArray.cpp
#include <bits/stdc++.h>
using namespace std;


int main(){


	int n = 3 ;
	// cin >> n ;


	string strArr[] = {"abc" , "defg" ,"kartik"};

	// for(int i = 0 ; i < n ; i++){
	// 	cin >> strArr[i];
	// }


	for(int i = 0 ; i < n ; i++){
		cout << strArr[i] << endl ;
	}


	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < strArr[i].length() ; j++){
			cout<<strArr[i][j]<<" ";	
		}
		cout<< endl;
	}


}