// sumTraget.cpp

#include<iostream>
using namespace std;


int main(){

	int n , target , count = 0 ; 
	cin >> n ;


	int arr[n];

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}



	cout<<" Give me target : " ;

	cin >> target ;

	int sum = 0 ;
	for(int i = 0 ; i < n ; i++){
		sum = 0 ;
		// int sum = 0 
		for(int j = i ; j < n ; j++){

			sum = sum + arr[j];

			if(sum == target){
				count++;
			}

		}
	}

	cout<<" Subarray sum equsals to target : " << count << endl;

	return 0;
}