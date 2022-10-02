// evenAndOdd.cpp
#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n ;

	int odd = -1 , even = -1 ;

	int arr[n];

	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}


	for(int i = 0 ; i < n; i++){

		if(even == -1 && arr[i]%2 == 0 ){
			even = i ;
		}

		if(odd == -1 && arr[i]%2 == 1){
			odd = i ;
		}

	}

	cout<<"First odd position : " << odd <<"\n First even position : " << even << endl;


	return 0;
}