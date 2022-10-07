// findMissingNumber.cpp
#include<iostream>
using namespace std;


int main(){

	int n ; 
	cin >> n ;


	int arr[n];

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	} 


	int missing = 0 ;

	for(int i = 0 ; i < n  ; i++){
		missing = missing ^ arr[i];
	}

	for(int i = 1 ; i <= n + 1 ; i++){
		missing = missing ^ i ;
	}


	cout<<" missing number is : " << missing << endl;



	return 0;
}